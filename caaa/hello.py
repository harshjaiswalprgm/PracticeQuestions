import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

# Load the Excel file
file_path = "Heart Rate Data with Contextual Activities.xlsx"
data = pd.ExcelFile()

# Load the dataset from Sheet1
df = data.parse("Sheet1")
# Data Cleaning
df_cleaned = df.dropna(subset=['heart Rate (BPM)'])
df_cleaned['activity'].fillna('Unknown', inplace=True)
df_cleaned['comments'].fillna('No comments', inplace=True)

# Descriptive Statistics
heart_rate_stats = df_cleaned['heart Rate (BPM)'].describe()
print("Descriptive Statistics for Heart Rate (BPM):")
print(heart_rate_stats)

# Visualizations
# 1. Heart Rate Distribution
plt.figure(figsize=(8, 6))
sns.histplot(df_cleaned['heart Rate (BPM)'], bins=15, kde=True, color='skyblue')
plt.title("Heart Rate Distribution")
plt.xlabel("Heart Rate (BPM)")
plt.ylabel("Frequency")
plt.show()

# 2. Time Series Trend
df_cleaned['datetime'] = pd.to_datetime(df_cleaned['date'].astype(str) + ' ' + df_cleaned['timestamp'])
plt.figure(figsize=(10, 6))
plt.plot(df_cleaned['datetime'], df_cleaned['heart Rate (BPM)'], marker='o', linestyle='-', color='orange')
plt.title("Heart Rate Over Time")
plt.xlabel("Date & Time")
plt.ylabel("Heart Rate (BPM)")
plt.xticks(rotation=45)
plt.tight_layout()
plt.show()

# 3. Boxplot of Heart Rate by Activity
plt.figure(figsize=(12, 6))
sns.boxplot(x='activity', y='heart Rate (BPM)', data=df_cleaned, palette='Set2')
plt.title("Heart Rate by Activity")
plt.xlabel("Activity")
plt.ylabel("Heart Rate (BPM)")
plt.xticks(rotation=45)
plt.tight_layout()
plt.show()

# Correlation Analysis
correlation = df_cleaned[['age', 'heart Rate (BPM)']].corr()
print("\nCorrelation between Age and Heart Rate:")
print(correlation)
