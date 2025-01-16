# number_genertor
Random Number Generator in C

This C program is designed to generate random numbers within a specified range. The program utilizes the standard C library's rand() function, which produces a sequence of pseudo-random numbers. The program's functionality can be applied to various scenarios, such as simulations, modeling, and games, where random number generation is essential.

Program Overview

The program consists of a single source file, random_number_generator.c, which contains the main() function. The program's execution is initiated by calling the main() function, which orchestrates the entire process.

Key Components

1. Random Number Generation: The program employs the rand() function to produce random numbers. This function generates a sequence of pseudo-random numbers, which are uniformly distributed within a specified range.
2. Seeding the Random Number Generator: To ensure the generation of different random numbers each time the program is executed, the random number generator is seeded with the current time using the srand() function.
3. User Input: The program prompts the user to input the minimum and maximum values of the desired range. These values are used to scale the generated random numbers.
4. Random Number Scaling: The program scales the generated random numbers to fit within the user-specified range. This is achieved using the modulo operator, which ensures that the generated numbers are uniformly distributed within the desired range.
5. Output: The program displays the generated random number, along with the minimum and maximum values of the specified range.

Program Flow

1. The program starts by seeding the random number generator with the current time using the srand() function.
2. The program prompts the user to input the minimum and maximum values of the desired range.
3. The program generates a random number using the rand() function.
4. The program scales the generated random number to fit within the user-specified range.
5. The program displays the generated random number, along with the minimum and maximum values of the specified range.

Example Use Cases

1. Simulations: Random number generators are crucial in simulations, where they are used to model real-world phenomena, such as stock prices, weather patterns, or population growth.
2. Games: Random number generators are used in games to create unpredictable outcomes, such as shuffling cards, rolling dice, or generating random levels.
3. Modeling: Random number generators are used in modeling to create realistic models of complex systems, such as traffic flow, epidemic spread, or financial markets.

Conclusion

This C program provides a comprehensive implementation of a random number generator. By utilizing the standard C library's rand() function and scaling the generated numbers to fit within a user-specified range, this program offers a versatile solution for various applications, including simulations, games, and modeling.
