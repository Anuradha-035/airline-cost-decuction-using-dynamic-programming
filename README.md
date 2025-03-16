# airline-cost-Detection-using-dynamic-programming


## Overview
The Online Detection System is designed to predict airline ticket price trends based on factors such as the number of available seats and days remaining until departure. The system uses a demand function to adjust ticket prices dynamically, simulating real-world pricing strategies.

## Features
- Predicts daily ticket prices until departure.
- Adjusts prices based on demand and seat availability.
- Ensures price limits within a reasonable range.
- Uses randomness to simulate market fluctuations.

## Requirements
- C Compiler (e.g., GCC)
- Standard C Libraries (stdio.h, stdlib.h)

## Installation
1. Clone the repository:
   ```sh
   git clone https://github.com/your-repo/online-detection-system.git
   ```
2. Navigate to the project directory:
   ```sh
   cd online-detection-system
   ```
3. Compile the program:
   ```sh
   gcc -o predict_prices predict_prices.c
   ```

## Usage
1. Run the program:
   ```sh
   ./predict_prices
   ```
2. Enter the required inputs when prompted:
   - Total seats on the flight
   - Number of days until departure
   - Base ticket price
3. The system will output predicted prices for each day leading up to departure.

## Example Output
```
Enter total seats on the flight: 50
Enter number of days until departure: 10
Enter base ticket price: 100

Predicted Prices Per Day Until Departure:
Day 1: $95
Day 2: $97
Day 3: $102
...
Day 10: $100
```

## License
This project is open-source and available under the MIT License.

## Author
Developed by [Your Name]

