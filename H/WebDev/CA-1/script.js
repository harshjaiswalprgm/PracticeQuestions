let currentQuestionIndex = 0;
const questions = document.querySelectorAll('.question');
const prevButton = document.getElementById('prevButton');
const nextButton = document.getElementById('nextButton');

// Function to show the current question and hide others
function showQuestion(index) {
  questions.forEach((question, idx) => {
    question.classList.toggle('active', idx === index);
  });

  // Enable or disable navigation buttons
  prevButton.disabled = (index === 0);
  nextButton.disabled = (index === questions.length - 1);
}

// Function to navigate between questions
function navigateQuestion(direction) {
  currentQuestionIndex += direction;
  showQuestion(currentQuestionIndex);
}

// Show the first question initially
showQuestion(currentQuestionIndex);

function submitQuiz() {
  let score = 0;
  const correctAnswers = ['a', 'a', 'a', 'b', 'c', 'b', 'c', 'a', 'b', 'b']; // Example correct answers

  // Iterate through each question and check if the answer is correct
  questions.forEach((question, index) => {
    const selectedAnswer = document.querySelector(`input[name="question${index + 1}"]:checked`);
    if (selectedAnswer && selectedAnswer.value === correctAnswers[index]) {
      score++;
    }
  });

  displayResult(score);
}

function displayResult(score) {
  const resultSection = document.getElementById('result');
  const scoreElement = document.getElementById('score');
  scoreElement.textContent = `Your score: ${score}/10`;
  resultSection.style.display = 'block';
}
