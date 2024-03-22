#include <iostream>

using namespace std;


class Question {
   private:
   string question;
   string options[4];
   int correctAnswer;

   public:
   Question(string question, string option1, string option2, string option3, string option4, int correctAnswer){
      this->question = question;
      options[0] = option1;
      options[1] = option2;
      options[2] = option3;
      options[3] = option4;
      this->correctAnswer = correctAnswer;
   }

   string getQuestion() const {
      return question;
   }

   string getOption(int index) const {
      return options[index];
   }

   int getCorrectAnswer() const {
      return correctAnswer;
   }
};


void displayQuestion(Question &question){
   cout << question.getQuestion() << endl;

   for(size_t i = 0; i < 4; i++){
      cout << i + 1 << ". " <<  question.getOption(i) << endl;
   }
}






int main() {
   Question questions[10] {
      Question("What is the capital of France?", "Paris", "Berlin", "London", "Rome", 1),
      Question("Which planet is known as the Red Planet?", "Venus", "Mars", "Jupiter", "Saturn", 2),
      Question("Who painted the Mona Lisa?", "Leonardo da Vinci", "Pablo Picasso", "Vincent van Gogh", "Michelangelo", 1),
      Question("What is the chemical symbol for water?", "H2O", "CO2", "NaCl", "O2", 1),
      Question("What is the largest mammal?", "Elephant", "Blue Whale", "Giraffe", "Hippopotamus", 2),
      Question("What is the tallest mountain in the world?", "Mount Kilimanjaro", "Mount Everest", "K2", "Matterhorn", 2),
      Question("Who wrote 'Romeo and Juliet'?", "William Shakespeare", "Charles Dickens", "Mark Twain", "Jane Austen", 1),
      Question("What is the currency of Japan?", "Dollar", "Yuan", "Euro", "Yen", 4),
      Question("What is the chemical symbol for gold?", "Au", "Ag", "Cu", "Fe", 1),
      Question("What is the main ingredient in guacamole?", "Tomato", "Onion", "Avocado", "Pepper", 3)
   };

   int player1 = 0;
   int player2 = 0;

   for (int i = 0; i < 5; ++i) {
      cout << "Player 1's turn - Question " << i + 1 << endl;
      displayQuestion(questions[i]);
      int choice;
      cout << "Enter your choice: ";
      cin >> choice;
      if (choice == questions[i].getCorrectAnswer()) {
            cout << "Correct!" << endl << endl;
            ++player1;
      } else {
            cout << "Incorrect!" << endl << endl;
      }

      cout << "Player 2's turn - Question " << i + 1 << endl;
      displayQuestion(questions[i + 5]);
      cout << "Enter your choice: ";
      cin >> choice;
      if (choice == questions[i + 5].getCorrectAnswer()) {
            cout << "Correct!" << endl << endl;
            ++player2;
      } else {
            cout << "Incorrect!" << endl << endl;
      }
   }


   cout << "Player 1's score: " << player1 << endl;
   cout << "Player 2's score: " << player2 << endl;
   if (player1 > player2) {
      cout << "Player 1 wins!" << endl;
   } else if (player2 > player1) {
      cout << "Player 2 wins!" << endl;
   } else {
      cout << "It's a tie!" << endl;
   }



}