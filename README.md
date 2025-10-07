markdown
# 🗳️ Voting Eligibility Checker

A C++ program that determines voting eligibility based on age and citizenship status using nested if statements.

## 📋 Description
Checks voting eligibility criteria comprehensively:
- **Age validation** (0-120 years)
- **Citizenship status** (Y/N input)
- **Eligibility determination**
- **Appropriate guidance messages**

## 🚀 Features
- Age range validation with realistic limits
- Citizenship verification
- Nested eligibility logic
- Clear eligibility messages and guidance
- Input validation for edge cases

## 🛠️ Technologies
- C++
- Character input handling
- Integer validation
- Nested conditional statements
- User interaction and guidance

## 📥 Compilation & Usage
```bash
g++ -o eligibility_checker main.cpp
./eligibility_checker
🎯 Example Output
text
Enter your age: 20
Are you a citizen?: Y
You are eligible to vote.

Enter your age: 16
You are too young to vote.

Enter your age: 25
Are you a citizen?: N
You must be a citizen to vote.

Enter your age: -5
Invalid age.
🧠 Skills Practiced
Age validation and range checking

Character input handling

Nested eligibility logic

User guidance messages

Conditional statement nesting

Input sanitization

📊 Project Structure
text
eligibility-checker/
├── main.cpp          # Main eligibility checking program
├── README.md         # Project documentation
└── .gitignore        # Git ignore file for C++
🔧 Future Improvements
Add multiple citizenship status options

Implement date of birth input

Add different country voting rules

Create voter registration simulation

Add database integration for citizen verification

⚠️ Learning Note
This project demonstrates real-world application of nested conditional logic in eligibility systems used in government and organizational applications.

🎓 Educational Value
Practical application of conditional logic

User input validation techniques

Real-world problem solving

Citizenship and age verification systems

👨‍💻 About the Developer
Completing my C++ beginner project portfolio with practical, real-world application development.
