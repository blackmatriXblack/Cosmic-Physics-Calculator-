# Cosmic Physics Calculator v1.0 – Technical Documentation

## 1. Project Overview

**Cosmic Physics Calculator v1.0** is an advanced, terminal-based computational suite designed for astrophysicists, cosmologists, and physics students. Developed in standard C, this application provides a unified interface for solving complex problems across classical mechanics, thermodynamics, quantum mechanics, special/general relativity, and cosmology.

Unlike basic calculators, this tool integrates a comprehensive database of physical constants (e.g., Planck constant, Hubble constant, Solar mass) and implements sophisticated algorithms for multi-variable calculations, such as the Ideal Gas Law validation and Multi-Planetary Gravity simulations. It serves as both a practical calculation engine and an educational reference for fundamental physical laws.

### 1.1 Core Objectives
*   **Scientific Precision:** Utilize double-precision floating-point arithmetic and standardized physical constants to ensure high-accuracy results suitable for academic and preliminary research purposes.
*   **Broad Domain Coverage:** Span ten major areas of physics, from Newtonian Kinematics to Einstein’s General Relativity and Plasma Physics.
*   **Robust Error Handling:** Implement rigorous input validation to prevent mathematical errors (e.g., division by zero, square roots of negative numbers) and handle non-numeric user inputs gracefully.
*   **Educational Context:** Provide clear prompts and structured output that reinforce the underlying physical formulas being applied.

### 1.2 Key Features
*   **40 Specialized Modules:** Covering topics such as Schwarzschild Radius, Eddington Luminosity, Jeans Mass, and Relativistic Doppler Effect.
*   **Multi-Planetary Support:** Includes a built-in database of celestial bodies (Mercury to Pluto) for calculating gravitational forces and potentials in different environments.
*   **Cosmological Models:** Implements simplified $\Lambda$CDM model calculations, including Hubble Parameter at Redshift and Critical Density of the Universe.
*   **Interactive Validation:** The Thermodynamics module actively checks if input values satisfy the Ideal Gas Law ($PV = nRT$) within a floating-point tolerance.

---

## 2. System Architecture

### 2.1 Physical Constants Database
The application defines a robust set of global constants using `#define` directives, ensuring consistency across all modules.

| Constant | Symbol | Value | Unit |
| :--- | :---: | :--- | :--- |
| Gravitational Constant | $G$ | `6.67430e-11` | $N \cdot m^2 / kg^2$ |
| Speed of Light | $c$ | `299792458.0` | $m/s$ |
| Planck Constant | $h$ | `6.62607015e-34` | $J \cdot s$ |
| Boltzmann Constant | $k_B$ | `1.380649e-23` | $J/K$ |
| Hubble Constant | $H_0$ | `70.0` | $km/s/Mpc$ |
| Solar Mass | $M_{\odot}$ | `1.989e30` | $kg$ |
| Electron Mass | $m_e$ | `9.1093837015e-31` | $kg$ |

### 2.2 Modular Design
The program follows a **Procedural Modular Architecture**. Each physics domain is encapsulated in a dedicated function (e.g., `void hubble_law()`), called via a central `switch-case` dispatcher in `main()`.

*   **Input Layer:** Custom functions `get_integer_input()` and `get_double_input()` handle user interaction, ensuring buffer safety and type correctness.
*   **Processing Layer:** Individual calculator functions perform the mathematical operations using `<math.h>` libraries (`sqrt`, `pow`, `sin`, `fabs`).
*   **Output Layer:** Results are formatted using scientific notation (`%.2e`) for large/small values and fixed-point notation (`%.4f`) for standard magnitudes.

---

## 3. Module Detailed Analysis

### 3.1 Input Validation Engine
A critical component of the system is its resilience against user error. The `get_double_input()` function employs a loop that checks the return value of `scanf`:

```c
if (scanf("%lf%c", &input, &term) != 2 || term != '\n') {
    printf("Invalid input. Please enter a number.\n");
    while (getchar() != '\n'); // Clear buffer
}
```
This prevents the "infinite loop" bug common in C console applications when users enter characters instead of numbers. Additionally, each calculator function includes specific logical checks (e.g., ensuring radius $r > 0$ before calculating gravitational force).

### 3.2 Cosmology Module (`hubble_parameter_at_redshift`)
This module implements a simplified Friedmann equation for a flat universe:
$$ H(z) = H_0 \sqrt{\Omega_m (1+z)^3 + \Omega_\Lambda} $$
*   **Parameters:** Uses $\Omega_m = 0.3$ (Matter) and $\Omega_\Lambda = 0.7$ (Dark Energy).
*   **Significance:** Allows users to observe how the expansion rate of the universe changes over cosmic time (redshift).

### 3.3 Thermodynamics Validator (`thermodynamicsCalculator`)
Unlike simple solvers, this module performs a **consistency check**:
1.  Calculates $PV$ and $nRT$ separately.
2.  Compares them using `fabs(PV - nRT) < 1e-9`.
3.  Reports whether the input state is physically consistent with an ideal gas. This is particularly useful for students verifying experimental data.

### 3.4 Relativity Suite
The application includes a comprehensive set of Special Relativity tools:
*   **Lorentz Factor ($\gamma$):** Checks if $v < c$ to prevent imaginary results.
*   **Time Dilation & Length Contraction:** Demonstrates the asymmetry between proper and observed frames.
*   **Relativistic Energy/Momentum:** Supports calculation via both velocity ($v$) and momentum ($p$) inputs, utilizing the energy-momentum relation $E^2 = (pc)^2 + (m_0c^2)^2$.

### 3.5 Astrophysics & Plasma Physics
*   **Jeans Mass:** Calculates the minimum mass for a cloud to collapse under its own gravity, crucial for star formation studies.
*   **Eddington Luminosity:** Determines the maximum luminosity a body can achieve when radiation pressure balances gravitational pull.
*   **Plasma Frequency & Debye Length:** Essential for plasma physics, calculating shielding effects and oscillation frequencies in ionized gases.

---

## 4. User Interface & Experience

### 4.1 Menu Structure
The main menu is organized numerically (1-40), providing quick access to specific formulas. A "Help" or "Exit" option (0) ensures easy navigation.

### 4.2 Output Formatting
*   **Scientific Notation:** Used for extreme values (e.g., Atomic scales in Quantum Mechanics or Cosmic scales in Cosmology) to maintain readability.
*   **Contextual Prompts:** Each input request specifies the required units (e.g., "Enter mass (kg)", "Enter distance (m)"), reducing unit-conversion errors.

### 4.3 Sample Session: Schwarzschild Radius
```text
Please select a calculation:
...
4. Schwarzschild Radius
...
Enter your choice: 4

Schwarzschild Radius Calculation:
Enter the mass of the black hole (kg): 1.989e30
The Schwarzschild radius is approximately 2.95e+03 m
```

---

## 5. Compilation and Deployment

### 5.1 Prerequisites
*   **Compiler:** GCC, Clang, or MSVC.
*   **Standard Library:** Requires `<stdio.h>`, `<stdlib.h>`, `<math.h>`, `<string.h>`, `<ctype.h>`, `<errno.h>`.
*   **Linking:** On Linux/macOS, the math library must be linked explicitly.

### 5.2 Build Instructions

**On Linux/macOS:**
```bash
gcc main.c -o cosmic_calc -lm -std=c99
./cosmic_calc
```

**On Windows (MinGW):**
```cmd
gcc main.c -o cosmic_calc.exe -lm
cosmic_calc.exe
```

**On Windows (MSVC):**
```cmd
cl main.c
cosmic_calc.exe
```

---

## 6. Code Quality & Best Practices

### 6.1 Strengths
1.  **Constant Centralization:** All physical constants are defined at the top, making it easy to update values as scientific measurements improve.
2.  **Safety Checks:** Extensive use of `isnan()` and boundary checks (e.g., $v < c$, $r > 0$) ensures numerical stability.
3.  **Modularity:** Each function is self-contained, making it easy to extract individual calculators for other projects.
4.  **Portability:** Uses standard C libraries, ensuring it runs on any system with a C compiler.

### 6.2 Areas for Improvement
1.  **Unit Conversion:** Currently, all inputs require SI units. Adding a unit-conversion layer (e.g., accepting "km" or "light-years") would greatly enhance usability.
2.  **Hardcoded Cosmology:** The $\Omega_m$ and $\Omega_\Lambda$ values are hardcoded. Allowing user-defined cosmological parameters would make the tool more flexible for research.
3.  **Output Precision:** Some outputs use `%.2f` which might truncate small but significant values. Using `%.4e` consistently for scientific results might be better.

---

## 7. Future Roadmap

### 7.1 Short-Term Enhancements
*   **Graphing Integration:** Output data points to a CSV file for external plotting in Python or Excel.
*   **Batch Mode:** Allow reading inputs from a text file for automated processing of multiple scenarios.
*   **History Log:** Save the last 20 calculations to a local file for review.

### 7.2 Long-Term Vision
*   **Symbolic Algebra:** Integrate a library like GiNaC to solve for variables algebraically.
*   **GUI Frontend:** Port to a graphical interface using Qt or GTK for visualizing orbits and wave functions.
*   **Quantum Field Theory:** Add modules for Feynman diagram calculations or particle decay rates.

---

## 8. Conclusion

**Cosmic Physics Calculator v1.0** is a robust, scientifically accurate, and well-structured tool that bridges the gap between theoretical physics formulas and practical computation. Its emphasis on input validation, modular design, and broad domain coverage makes it an invaluable resource for students and professionals alike. By integrating everything from Newtonian gravity to Cosmic Microwave Background temperatures, it offers a unique "Swiss Army Knife" for physics calculations in a lightweight, portable C package.
