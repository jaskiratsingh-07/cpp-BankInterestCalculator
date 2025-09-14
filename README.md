# cpp-BankInterestCalculator
A simple C++ program that calculates the projected bank balance after one year based on a fixed interest rate. VIP customers receive a special higher interest rate.

## 🔧 Features

- Accepts multiple customer records.
- Applies:
  - **8% interest rate** by default.
  - **10% VIP interest rate** for accounts with numbers **below 10001**.
- Displays the projected amount after one year for each account.

## 📋 How It Works

1. The user specifies how many customer records they want to enter.
2. For each customer:
   - Inputs account number and current bank balance.
   - VIP status is determined automatically.
   - Final balance after 1 year is calculated using the appropriate interest rate.

## 🧮 Interest Formula
final_balance = current_balance × interest_rate

- Regular rate: `1.08` (8%)
- VIP rate: `1.10` (10%)


