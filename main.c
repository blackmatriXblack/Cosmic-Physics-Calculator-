#include <stdio.h>
#include <math.h>
#include <stdlib.h> // For exit()
#include <string.h> // For strcmp
#include <locale.h> // For setlocale (though not strictly needed for English output)
#include <ctype.h>  // For tolower
#include <errno.h>  // For checking errors from math functions like sqrt

// Define common physical constants
#define G 6.67430e-11       // Gravitational Constant (N m^2 / kg^2)
#define C 299792458.0       // Speed of Light in Vacuum (m/s)
#define PI 3.14159265359    // Pi
#define H0_KMS_MPC 70.0     // Hubble Constant (km/s/Mpc), using a typical value
#define MPC_TO_M 3.086e22   // 1 Mpc to meters
#define H 6.62607015e-34    // Planck Constant (J s)
#define K 1.380649e-23      // Boltzmann Constant (J/K)
#define SIGMA 5.670367e-8   // Stefan-Boltzmann Constant (W/m^2/K^4)
#define ME 9.1093837015e-31 // Electron Mass (kg)
#define MP 1.67262192369e-27 // Proton Mass (kg)
#define AU_TO_M 149597870700.0 // Astronomical Unit to meters
#define LY_TO_M 9.461e15    // Light-year to meters
#define EV_TO_J 1.602176634e-19 // Electron Volt to Joules
#define SOLAR_MASS 1.989e30 // Solar Mass (kg)
#define SOLAR_LUMINOSITY 3.828e26 // Solar Luminosity (W)
#define THOMSON_CROSS_SECTION 6.6524e-29 // Thomson Scattering Cross Section (m^2)
#define PROTON_CHARGE 1.602176634e-19 // Elementary charge (C)
#define VACUUM_PERMITTIVITY 8.8541878128e-12 // Vacuum Permittivity (F/m)
#define ELECTRON_CHARGE_SQ (PROTON_CHARGE * PROTON_CHARGE) // e^2
#define VACUUM_PERMEABILITY 1.2566370614e-6 // Permeability of free space (T m / A)

// Define cosmological parameters for simplified calculations
#define OMEGA_M 0.3 // Matter density parameter
#define OMEGA_L 0.7 // Dark energy density parameter

// Function declarations
void hubble_law();
void gravitational_force();
void escape_velocity();
void schwarzschild_radius();
void mass_energy_equivalence();
void cmb_temperature();
void stellar_luminosity_flux();
void circular_orbit_velocity();
void plancks_law_peak_wavelength();
void stefan_boltzmann_law();
void de_broglie_wavelength();
void photon_energy_momentum();
void redshift_from_wavelength();
void hubble_time_radius();
void critical_density();
void relativistic_doppler_effect();
void lorentz_factor();
void time_dilation();
void length_contraction();
void stellar_lifetime();
void jeans_mass();
void radiation_pressure();
void relativistic_momentum();
void gravitational_potential_energy();
void eddington_luminosity();
void maxwell_boltzmann_peak_speed();
void relativistic_total_energy();
void tidal_force();
void plasma_frequency();
void debye_length();
void compton_wavelength();
void gravitational_redshift();
void relativistic_kinetic_energy();
void photon_wavelength_from_energy();
void schwarzschild_time_dilation();
void orbital_period(); // New: Orbital Period
void magnetic_pressure(); // New: Magnetic Pressure
void einstein_radius(); // New: Einstein Radius
void non_relativistic_kinetic_energy(); // New: Non-relativistic Kinetic Energy
void hubble_parameter_at_redshift(); // New: Hubble Parameter at Redshift


int get_integer_input();
double get_double_input();

int main() {
    // Set locale to English for standard output
    // This might help ensure consistent output formatting, though not strictly needed for character display in English
    setlocale(LC_ALL, "C");

    int choice;

    printf("Welcome to the Cosmic Physics Calculator!\n");

    while (1) {
        printf("\nPlease select a calculation:\n");
        printf(" 1. Hubble's Law (Distance or Velocity)\n");
        printf(" 2. Newtonian Gravitational Force\n");
        printf(" 3. Escape Velocity\n");
        printf(" 4. Schwarzschild Radius\n");
        printf(" 5. Mass-Energy Equivalence (E=mc^2)\n");
        printf(" 6. Cosmic Microwave Background Temperature (Estimation)\n");
        printf(" 7. Stellar Luminosity and Flux\n");
        printf(" 8. Circular Orbit Velocity\n");
        printf(" 9. Planck's Law (Peak Wavelength - Wien's Displacement Law)\n");
        printf("10. Stefan-Boltzmann Law (Blackbody Radiation)\n");
        printf("11. De Broglie Wavelength\n");
        printf("12. Photon Energy and Momentum\n");
        printf("13. Redshift from Wavelength Shift\n");
        printf("14. Hubble Time and Radius\n");
        printf("15. Critical Density of the Universe\n");
        printf("16. Relativistic Doppler Effect\n");
        printf("17. Lorentz Factor\n");
        printf("18. Time Dilation\n");
        printf("19. Length Contraction\n");
        printf("20. Stellar Lifetime (Approximation)\n");
        printf("21. Jeans Mass (Gravitational Instability)\n");
        printf("22. Radiation Pressure\n");
        printf("23. Relativistic Momentum\n");
        printf("24. Gravitational Potential Energy\n");
        printf("25. Eddington Luminosity\n");
        printf("26. Maxwell-Boltzmann Distribution Peak Speed\n");
        printf("27. Relativistic Total Energy\n");
        printf("28. Tidal Force (Simplified)\n");
        printf("29. Plasma Frequency\n");
        printf("30. Debye Length\n");
        printf("31. Compton Wavelength\n");
        printf("32. Gravitational Redshift (Weak Field)\n");
        printf("33. Relativistic Kinetic Energy\n");
        printf("34. Photon Wavelength from Energy\n");
        printf("35. Schwarzschild Time Dilation\n");
        printf("36. Orbital Period (Kepler's Third Law - Simplified)\n"); // New
        printf("37. Magnetic Pressure\n"); // New
        printf("38. Einstein Radius (Simplified Gravitational Lensing)\n"); // New
        printf("39. Kinetic Energy (Non-relativistic)\n"); // New
        printf("40. Hubble Parameter at Redshift (Simplified)\n"); // New
        printf(" 0. Exit\n");
        printf("Enter your choice: ");

        choice = get_integer_input();

        switch (choice) {
            case 1:
                hubble_law();
                break;
            case 2:
                gravitational_force();
                break;
            case 3:
                escape_velocity();
                break;
            case 4:
                schwarzschild_radius();
                break;
            case 5:
                mass_energy_equivalence();
                break;
            case 6:
                cmb_temperature();
                break;
            case 7:
                stellar_luminosity_flux();
                break;
            case 8:
                circular_orbit_velocity();
                break;
            case 9:
                plancks_law_peak_wavelength();
                break;
            case 10:
                stefan_boltzmann_law();
                break;
            case 11:
                de_broglie_wavelength();
                break;
            case 12:
                photon_energy_momentum();
                break;
            case 13:
                redshift_from_wavelength();
                break;
            case 14:
                hubble_time_radius();
                break;
            case 15:
                critical_density();
                break;
            case 16:
                relativistic_doppler_effect();
                break;
            case 17:
                lorentz_factor();
                break;
            case 18:
                time_dilation();
                break;
            case 19:
                length_contraction();
                break;
            case 20:
                stellar_lifetime();
                break;
            case 21:
                jeans_mass();
                break;
            case 22:
                radiation_pressure();
                break;
            case 23:
                relativistic_momentum();
                break;
            case 24:
                gravitational_potential_energy();
                break;
            case 25:
                eddington_luminosity();
                break;
            case 26:
                maxwell_boltzmann_peak_speed();
                break;
            case 27:
                relativistic_total_energy();
                break;
            case 28:
                tidal_force();
                break;
            case 29:
                plasma_frequency();
                break;
            case 30:
                debye_length();
                break;
            case 31:
                compton_wavelength();
                break;
            case 32:
                gravitational_redshift();
                break;
            case 33:
                relativistic_kinetic_energy();
                break;
            case 34:
                photon_wavelength_from_energy();
                break;
            case 35:
                schwarzschild_time_dilation();
                break;
            case 36: // New: Orbital Period
                orbital_period();
                break;
            case 37: // New: Magnetic Pressure
                magnetic_pressure();
                break;
            case 38: // New: Einstein Radius
                einstein_radius();
                break;
            case 39: // New: Non-relativistic Kinetic Energy
                non_relativistic_kinetic_energy();
                break;
            case 40: // New: Hubble Parameter at Redshift
                hubble_parameter_at_redshift();
                break;
            case 0:
                printf("Thank you for using the calculator. Goodbye!\n");
                exit(0); // Exit the program
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}

// Function to get integer input with basic validation
int get_integer_input() {
    int input;
    char term;

    // Loop until valid integer input is received
    while (1) {
        if (scanf("%d%c", &input, &term) != 2 || term != '\n') {
            printf("Invalid input. Please enter an integer.\n");
            // Clear input buffer
            while (getchar() != '\n');
        } else {
            return input;
        }
    }
}

// Function to get double input with basic validation
double get_double_input() {
    double input;
    char term;

    // Loop until valid double input is received
    while (1) {
        if (scanf("%lf%c", &input, &term) != 2 || term != '\n') {
            printf("Invalid input. Please enter a number.\n");
            // Clear input buffer
            while (getchar() != '\n');
        } else {
            return input;
        }
    }
}

// 1. Hubble's Law Calculation
void hubble_law() {
    int sub_choice;
    double value;
    double result;

    printf("\nHubble's Law Calculation:\n");
    printf("1. Calculate Distance from Recessional Velocity\n");
    printf("2. Calculate Recessional Velocity from Distance\n");
    printf("Enter your choice: ");

    sub_choice = get_integer_input();

    if (sub_choice == 1) {
        printf("Enter the galaxy's recessional velocity (km/s): ");
        value = get_double_input();
        if (isnan(value)) return; // Check for NaN from get_double_input
        // Distance (Mpc) = Velocity (km/s) / Hubble Constant (km/s/Mpc)
        result = value / H0_KMS_MPC;
        printf("The distance to the galaxy is approximately %.2f Mpc\n", result);
    } else if (sub_choice == 2) {
        printf("Enter the distance to the galaxy (Mpc): ");
        value = get_double_input();
        if (isnan(value) || value < 0) {
            printf("Invalid input. Must be non-negative.\n");
            return;
        }
        // Velocity (km/s) = Distance (Mpc) * Hubble Constant (km/s/Mpc)
        result = value * H0_KMS_MPC;
        printf("The galaxy's recessional velocity is approximately %.2f km/s\n", result);
    } else {
        printf("Invalid choice.\n");
    }
}

// 2. Newtonian Gravitational Force Calculation
void gravitational_force() {
    double m1, m2, r;
    double force;

    printf("\nNewtonian Gravitational Force Calculation:\n");
    printf("Enter the mass of the first object (kg): ");
    m1 = get_double_input();
    if (isnan(m1)) return;

    printf("Enter the mass of the second object (kg): ");
    m2 = get_double_input();
    if (isnan(m2)) return;

    printf("Enter the distance between the centers of the two objects (m): ");
    r = get_double_input();
    if (isnan(r) || r <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    // F = G * m1 * m2 / r^2
    force = G * m1 * m2 / (r * r);
    printf("The gravitational force between the two objects is approximately %.2e N\n", force); // Display in scientific notation
}

// 3. Escape Velocity Calculation
void escape_velocity() {
    double m, r;
    double velocity;

    printf("\nEscape Velocity Calculation:\n");
    printf("Enter the mass of the celestial body (kg): ");
    m = get_double_input();
    if (isnan(m) || m < 0) {
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

    printf("Enter the radius of the celestial body (m): ");
    r = get_double_input();
    if (isnan(r) || r <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    // V_escape = sqrt(2 * G * M / R)
    velocity = sqrt(2 * G * m / r);
    printf("The escape velocity is approximately %.2f m/s\n", velocity);
}

// 4. Schwarzschild Radius Calculation
void schwarzschild_radius() {
    double m;
    double radius;

    printf("\nSchwarzschild Radius Calculation:\n");
    printf("Enter the mass of the black hole (kg): ");
    m = get_double_input();
    if (isnan(m) || m <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    // R_s = 2 * G * M / c^2
    radius = 2 * G * m / (C * C);
    printf("The Schwarzschild radius is approximately %.2e m\n", radius);
}

// 5. Mass-Energy Equivalence Calculation (E=mc^2)
void mass_energy_equivalence() {
    double mass;
    double energy;

    printf("\nMass-Energy Equivalence (E=mc^2) Calculation:\n");
    printf("Enter the mass (kg): ");
    mass = get_double_input();
    if (isnan(mass) || mass < 0) {
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

    // E = m * c^2
    energy = mass * C * C;
    printf("The equivalent energy is approximately %.2e Joules (J)\n", energy);
}

// 6. Cosmic Microwave Background Temperature Estimation (Simplified Model)
// Assumes temperature is inversely proportional to redshift z+1: T(z) = T0 * (1+z)
// T0 is the current CMB temperature (approx 2.725 K)
void cmb_temperature() {
    double redshift;
    double temperature;
    const double T0 = 2.725; // Current CMB Temperature (K)

    printf("\nCosmic Microwave Background Temperature Estimation:\n");
    printf("Enter the redshift z (z >= 0): ");
    redshift = get_double_input();
    if (isnan(redshift) || redshift < 0) {
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

    // T(z) = T0 * (1 + z)
    temperature = T0 * (1 + redshift);
    printf("The estimated CMB temperature at redshift z = %.2f is approximately %.2f K\n", redshift, temperature);
}

// 7. Stellar Luminosity and Flux Calculation
// Flux F = Luminosity L / (4 * pi * Distance r^2)
void stellar_luminosity_flux() {
    int sub_choice;
    double L, r, F;

    printf("\nStellar Luminosity and Flux Calculation:\n");
    printf("1. Calculate Flux from Luminosity and Distance\n");
    printf("2. Calculate Luminosity from Flux and Distance\n");
    printf("3. Calculate Distance from Luminosity and Flux\n");
    printf("Enter your choice: ");

    sub_choice = get_integer_input();

    if (sub_choice == 1) {
        printf("Enter the star's luminosity (W): ");
        L = get_double_input();
        if (isnan(L) || L < 0) {
            printf("Invalid input. Must be non-negative.\n");
            return;
        }
        printf("Enter the distance to the star (m): ");
        r = get_double_input();
        if (isnan(r) || r <= 0) {
            printf("Invalid input. Must be greater than 0.\n");
            return;
        }
        // F = L / (4 * pi * r^2)
        F = L / (4 * PI * r * r);
        printf("The star's flux is approximately %.2e W/m^2\n", F);
    } else if (sub_choice == 2) {
        printf("Enter the star's flux (W/m^2): ");
        F = get_double_input();
        if (isnan(F) || F < 0) {
            printf("Invalid input. Must be non-negative.\n");
            return;
        }
        printf("Enter the distance to the star (m): ");
        r = get_double_input();
        if (isnan(r) || r <= 0) {
            printf("Invalid input. Must be greater than 0.\n");
            return;
        }
        // L = F * 4 * pi * r^2
        L = F * 4 * PI * r * r;
        printf("The star's luminosity is approximately %.2e W\n", L);
    } else if (sub_choice == 3) {
         printf("Enter the star's luminosity (W): ");
        L = get_double_input();
        if (isnan(L) || L < 0) {
            printf("Invalid input. Must be non-negative.\n");
            return;
        }
        printf("Enter the star's flux (W/m^2): ");
        F = get_double_input();
        if (isnan(F) || F <= 0) {
            printf("Invalid input. Must be greater than 0.\n");
            return;
        }
        // r = sqrt(L / (4 * pi * F))
        // Need to check if L / (4 * pi * F) is non-negative
        double temp = L / (4 * PI * F);
        if (temp >= 0) {
            r = sqrt(temp);
            printf("The distance to the star is approximately %.2e m\n", r);
        } else {
            printf("Cannot calculate distance. Check input luminosity and flux.\n");
        }
    } else {
        printf("Invalid choice.\n");
    }
}

// 8. Circular Orbit Velocity Calculation
// Assumes central body mass is much greater than orbiting object mass
// V_orbit = sqrt(G * M / r)
void circular_orbit_velocity() {
    double M, r; // Mass of central body (kg), Orbital radius (m)
    double velocity; // Orbital velocity

    printf("\nCircular Orbit Velocity Calculation:\n");
    printf("Enter the mass of the central body (kg): ");
    M = get_double_input();
    if (isnan(M) || M <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }
    printf("Enter the orbital radius (m): ");
    r = get_double_input();
    if (isnan(r) || r <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    // V_orbit = sqrt(G * M / r)
    velocity = sqrt(G * M / r);
    printf("The circular orbit velocity is approximately %.2f m/s\n", velocity);
}

// 9. Planck's Law (Peak Wavelength - Wien's Displacement Law)
// Lambda_max = b / T, where b is Wien's displacement constant (approx 2.898e-3 m K)
void plancks_law_peak_wavelength() {
    double temperature; // Temperature (K)
    double peak_wavelength; // Peak wavelength (m)
    const double b = 2.898e-3; // Wien's displacement constant (m K)

    printf("\nPlanck's Law (Peak Wavelength - Wien's Displacement Law):\n");
    printf("Enter the temperature of the blackbody (K): ");
    temperature = get_double_input();
    if (isnan(temperature) || temperature <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    // Lambda_max = b / T
    peak_wavelength = b / temperature;
    printf("The peak emission wavelength is approximately %.2e m\n", peak_wavelength);
}

// 10. Stefan-Boltzmann Law (Blackbody Radiation)
// Power per unit area (Flux) = sigma * T^4
void stefan_boltzmann_law() {
    double temperature; // Temperature (K)
    double flux; // Radiant flux (W/m^2)

    printf("\nStefan-Boltzmann Law (Blackbody Radiation):\n");
    printf("Enter the temperature of the blackbody (K): ");
    temperature = get_double_input();
    if (isnan(temperature) || temperature < 0) {
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

    // Flux = sigma * T^4
    flux = SIGMA * pow(temperature, 4);
    printf("The radiant flux from the blackbody is approximately %.2e W/m^2\n", flux);
}

// 11. De Broglie Wavelength
// Lambda = h / p = h / (m * v)
void de_broglie_wavelength() {
    double mass, velocity; // Mass (kg), Velocity (m/s)
    double wavelength; // De Broglie wavelength (m)

    printf("\nDe Broglie Wavelength Calculation:\n");
    printf("Enter the mass of the particle (kg): ");
    mass = get_double_input();
    if (isnan(mass) || mass <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }
    printf("Enter the velocity of the particle (m/s): ");
    velocity = get_double_input();
    if (isnan(velocity)) return; // Velocity can be 0, but not NaN

    // Lambda = h / (m * v)
    if (mass * velocity == 0) {
        printf("Cannot calculate wavelength for zero momentum.\n");
    } else {
        wavelength = H / (mass * velocity);
        printf("The De Broglie wavelength is approximately %.2e m\n", wavelength);
    }
}

// 12. Photon Energy and Momentum
// E = h * f = h * c / lambda
// p = E / c = h / lambda
void photon_energy_momentum() {
    int sub_choice;
    double value; // Input value (frequency or wavelength)
    double energy, momentum; // Photon energy (J), Momentum (kg m/s)

    printf("\nPhoton Energy and Momentum Calculation:\n");
    printf("1. Calculate from Frequency\n");
    printf("2. Calculate from Wavelength\n");
    printf("Enter your choice: ");

    sub_choice = get_integer_input();

    if (sub_choice == 1) {
        printf("Enter the photon frequency (Hz): ");
        value = get_double_input();
        if (isnan(value) || value < 0) {
            printf("Invalid input. Must be non-negative.\n");
            return;
        }
        // E = h * f
        energy = H * value;
        // p = E / c
        momentum = energy / C;
        printf("Photon Energy: %.2e J\n", energy);
        printf("Photon Momentum: %.2e kg m/s\n", momentum);
    } else if (sub_choice == 2) {
        printf("Enter the photon wavelength (m): ");
        value = get_double_input();
        if (isnan(value) || value <= 0) {
            printf("Invalid input. Must be greater than 0.\n");
            return;
        }
        // E = h * c / lambda
        energy = H * C / value;
        // p = h / lambda
        momentum = H / value;
        printf("Photon Energy: %.2e J\n", energy);
        printf("Photon Momentum: %.2e kg m/s\n", momentum);
    } else {
        printf("Invalid choice.\n");
    }
}

// 13. Redshift from Wavelength Shift
// z = (Observed_wavelength - Rest_wavelength) / Rest_wavelength
void redshift_from_wavelength() {
    double observed_lambda, rest_lambda; // Observed and rest wavelengths (m)
    double redshift; // Redshift

    printf("\nRedshift from Wavelength Shift Calculation:\n");
    printf("Enter the observed wavelength (m): ");
    observed_lambda = get_double_input();
    if (isnan(observed_lambda) || observed_lambda <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }
    printf("Enter the rest wavelength (m): ");
    rest_lambda = get_double_input();
    if (isnan(rest_lambda) || rest_lambda <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    // z = (observed_lambda - rest_lambda) / rest_lambda
    redshift = (observed_lambda - rest_lambda) / rest_lambda;
    printf("The redshift is approximately %.4f\n", redshift);
}

// 14. Hubble Time and Radius
// Hubble Time (approx) = 1 / H0 (in seconds)
// Hubble Radius (approx) = c / H0 (in meters)
// Need to convert H0 from km/s/Mpc to 1/s
// H0_in_s = H0_KMS_MPC * 1000 (m/km) / MPC_TO_M (m/Mpc)
void hubble_time_radius() {
    double h0_in_s; // Hubble constant in 1/s
    double hubble_time; // Hubble time (s)
    double hubble_radius; // Hubble radius (m)

    printf("\nHubble Time and Radius Calculation (using current H0):\n");

    h0_in_s = H0_KMS_MPC * 1000.0 / MPC_TO_M;

    // Hubble Time (approx) = 1 / H0
    hubble_time = 1.0 / h0_in_s;

    // Hubble Radius (approx) = c / H0
    hubble_radius = C / h0_in_s;

    printf("Approximate Hubble Time: %.2e seconds (approx %.2f billion years)\n", hubble_time, hubble_time / (3.154e16)); // Convert seconds to billion years
    printf("Approximate Hubble Radius: %.2e meters (approx %.2f billion light-years)\n", hubble_radius, hubble_radius / (LY_TO_M * 1e9)); // Convert meters to billion light-years
}

// 15. Critical Density of the Universe
// Rho_c = 3 * H0^2 / (8 * pi * G)
// Need H0 in 1/s
void critical_density() {
    double h0_in_s; // Hubble constant in 1/s
    double critical_density_val; // Critical density (kg/m^3)

    printf("\nCritical Density of the Universe Calculation (using current H0):\n");

    h0_in_s = H0_KMS_MPC * 1000.0 / MPC_TO_M;

    // Rho_c = 3 * H0^2 / (8 * pi * G)
    critical_density_val = 3.0 * pow(h0_in_s, 2) / (8.0 * PI * G);

    printf("The critical density of the Universe is approximately %.2e kg/m^3\n", critical_density_val);
}

// 16. Relativistic Doppler Effect
// lambda_obs = lambda_rest * sqrt((1 + v/c) / (1 - v/c))
// f_obs = f_rest * sqrt((1 - v/c) / (1 + v/c))
void relativistic_doppler_effect() {
    int sub_choice;
    double velocity;
    double rest_lambda, rest_freq;
    double observed_lambda, observed_freq;
    double beta; // v/c
    double sqrt_factor; // sqrt((1 + beta) / (1 - beta)) or sqrt((1 - beta) / (1 + beta))

    printf("\nRelativistic Doppler Effect Calculation:\n");
    printf("Enter the source's velocity relative to the observer (m/s): ");
    velocity = get_double_input();
    if (isnan(velocity) || fabs(velocity) >= C) { // Velocity must be less than c
        printf("Invalid input. Velocity must be less than the speed of light.\n");
        return;
    }

    beta = velocity / C;

    printf("1. Calculate Observed Wavelength\n");
    printf("2. Calculate Observed Frequency\n");
    printf("Enter your choice: ");

    sub_choice = get_integer_input();

    if (sub_choice == 1) {
        printf("Enter the rest wavelength (m): ");
        rest_lambda = get_double_input();
        if (isnan(rest_lambda) || rest_lambda <= 0) {
            printf("Invalid input. Must be greater than 0.\n");
            return;
        }
        // lambda_obs = lambda_rest * sqrt((1 + beta) / (1 - beta))
        if (1.0 - beta <= 0) { // Avoid division by zero or sqrt of negative
             printf("Cannot calculate.\n");
             return;
        }
        sqrt_factor = sqrt((1.0 + beta) / (1.0 - beta));
        observed_lambda = rest_lambda * sqrt_factor;
        printf("The observed wavelength is approximately %.2e m\n", observed_lambda);
    } else if (sub_choice == 2) {
        printf("Enter the rest frequency (Hz): ");
        rest_freq = get_double_input();
         if (isnan(rest_freq) || rest_freq < 0) {
            printf("Invalid input. Must be non-negative.\n");
            return;
        }
        // f_obs = f_rest * sqrt((1 - beta) / (1 + beta))
        if (1.0 + beta <= 0) { // Avoid division by zero or sqrt of negative
             printf("Cannot calculate.\n");
             return;
        }
        sqrt_factor = sqrt((1.0 - beta) / (1.0 + beta));
        observed_freq = rest_freq * sqrt_factor;
        printf("The observed frequency is approximately %.2e Hz\n", observed_freq);
    } else {
        printf("Invalid choice.\n");
    }
}

// 17. Lorentz Factor
// gamma = 1 / sqrt(1 - v^2/c^2)
void lorentz_factor() {
    double velocity;
    double gamma;
    double beta_squared; // v^2/c^2

    printf("\nLorentz Factor Calculation:\n");
    printf("Enter the velocity of the object (m/s): ");
    velocity = get_double_input();
    if (isnan(velocity) || fabs(velocity) >= C) { // Velocity must be less than c
        printf("Invalid input. Velocity must be less than the speed of light.\n");
        return;
    }

    beta_squared = (velocity * velocity) / (C * C);

    if (1.0 - beta_squared <= 0) { // Avoid sqrt of zero or negative
         printf("Cannot calculate.\n");
         return;
    }

    gamma = 1.0 / sqrt(1.0 - beta_squared);
    printf("The Lorentz factor is approximately %.4f\n", gamma);
}

// 18. Time Dilation
// Delta_t = gamma * Delta_t_0
void time_dilation() {
    double proper_time; // Delta_t_0
    double velocity;
    double dilated_time; // Delta_t
    double gamma;
    double beta_squared; // v^2/c^2

    printf("\nTime Dilation Calculation:\n");
    printf("Enter the proper time interval (time in the moving object's frame) (s): ");
    proper_time = get_double_input();
    if (isnan(proper_time) || proper_time < 0) {
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

    printf("Enter the velocity of the object (m/s): ");
    velocity = get_double_input();
    if (isnan(velocity) || fabs(velocity) >= C) { // Velocity must be less than c
        printf("Invalid input. Velocity must be less than the speed of light.\n");
        return;
    }

    beta_squared = (velocity * velocity) / (C * C);

     if (1.0 - beta_squared <= 0) { // Avoid sqrt of zero or negative
         printf("Cannot calculate.\n");
         return;
    }

    gamma = 1.0 / sqrt(1.0 - beta_squared);
    dilated_time = gamma * proper_time;
    printf("The dilated time interval (time in the observer's frame) is approximately %.2e s\n", dilated_time);
}

// 19. Length Contraction
// L = L_0 / gamma
void length_contraction() {
    double proper_length; // L_0
    double velocity;
    double contracted_length; // L
    double gamma;
    double beta_squared; // v^2/c^2

    printf("\nLength Contraction Calculation:\n");
    printf("Enter the proper length (length in the object's rest frame) (m): ");
    proper_length = get_double_input();
    if (isnan(proper_length) || proper_length < 0) {
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

    printf("Enter the velocity of the object (m/s): ");
    velocity = get_double_input();
    if (isnan(velocity) || fabs(velocity) >= C) { // Velocity must be less than c
        printf("Invalid input. Velocity must be less than the speed of light.\n");
        return;
    }

    beta_squared = (velocity * velocity) / (C * C);

    if (1.0 - beta_squared <= 0) { // Avoid sqrt of zero or negative
         printf("Cannot calculate.\n");
         return;
    }

    gamma = 1.0 / sqrt(1.0 - beta_squared);
    contracted_length = proper_length / gamma;
    printf("The contracted length (length in the observer's frame) is approximately %.2e m\n", contracted_length);
}

// 20. Stellar Lifetime Estimation (Approximation)
// Lifetime ~ Mass / Luminosity (relative to Sun)
// Lifetime in years = 10^10 * (M/M_sun) / (L/L_sun)
void stellar_lifetime() {
    double mass_solar, luminosity_solar; // Mass and Luminosity in Solar units
    double lifetime_years;

    printf("\nStellar Lifetime Estimation (Approximation):\n");
    printf("Enter the star's mass (in Solar Masses): ");
    mass_solar = get_double_input();
    if (isnan(mass_solar) || mass_solar <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    printf("Enter the star's luminosity (in Solar Luminosities): ");
    luminosity_solar = get_double_input();
    if (isnan(luminosity_solar) || luminosity_solar <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    lifetime_years = 1e10 * (mass_solar / luminosity_solar);
    printf("Approximate Stellar Lifetime: %.2e years\n", lifetime_years);
}

// 21. Jeans Mass (Gravitational Instability)
// M_J = (pi/6)^(1/2) * (k T / G mu)^(3/2) * (1/(n mu))^(1/2)
// M_J = (pi/6)^(1/2) * (k T)^(3/2) / (G^(3/2) mu^2 n^(1/2))
void jeans_mass() {
    double temperature; // T (K)
    double number_density; // n (particles/m^3)
    double avg_particle_mass; // mu (kg)
    double jeans_mass_val; // M_J (kg)

    // Constant C_jeans = sqrt(PI/6) * pow(K, 1.5) / pow(G, 1.5)
    const double C_jeans = sqrt(PI / 6.0) * pow(K, 1.5) / pow(G, 1.5);

    printf("\nJeans Mass Calculation (Gravitational Instability):\n");
    printf("Enter the temperature of the gas cloud (K): ");
    temperature = get_double_input();
    if (isnan(temperature) || temperature <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    printf("Enter the number density of particles in the gas cloud (particles/m^3): ");
    number_density = get_double_input();
    if (isnan(number_density) || number_density < 0) { // Density can be 0, but usually positive in this context
         printf("Invalid input. Must be non-negative.\n");
         return;
    }

    printf("Enter the average mass per particle in the gas cloud (kg): ");
    avg_particle_mass = get_double_input();
    if (isnan(avg_particle_mass) || avg_particle_mass <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    // Check for division by zero or sqrt of negative
    if (number_density == 0 || avg_particle_mass == 0) {
         printf("Cannot calculate.\n");
         return;
    }

    // M_J = C_jeans * (T^1.5) / (n^0.5 * mu^2)
    jeans_mass_val = C_jeans * pow(temperature, 1.5) / (pow(number_density, 0.5) * pow(avg_particle_mass, 2));

    printf("The Jeans Mass is approximately %.2e kg\n", jeans_mass_val);
}

// 22. Radiation Pressure
// P_rad = F / c (for radiation normally incident on a perfectly absorbing surface)
void radiation_pressure() {
    double flux; // F (W/m^2)
    double radiation_pressure_val; // P_rad (Pa)

    printf("\nRadiation Pressure Calculation:\n");
    printf("Enter the radiant flux (W/m^2): ");
    flux = get_double_input();
    if (isnan(flux) || flux < 0) {
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

    // P_rad = F / c
    radiation_pressure_val = flux / C;

    printf("The radiation pressure is approximately %.2e Pa\n", radiation_pressure_val);
}

// 23. Relativistic Momentum
// p = gamma * m0 * v
void relativistic_momentum() {
    double rest_mass; // m0 (kg)
    double velocity; // v (m/s)
    double momentum; // p (kg m/s)
    double gamma;
    double beta_squared; // v^2/c^2

    printf("\nRelativistic Momentum Calculation:\n");
    printf("Enter the rest mass of the object (kg): ");
    rest_mass = get_double_input();
    if (isnan(rest_mass) || rest_mass < 0) {
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

    printf("Enter the velocity of the object (m/s): ");
    velocity = get_double_input();
    if (isnan(velocity) || fabs(velocity) >= C) { // Velocity must be less than c
        printf("Invalid input. Velocity must be less than the speed of light.\n");
        return;
    }

    beta_squared = (velocity * velocity) / (C * C);

    if (1.0 - beta_squared <= 0) { // Avoid sqrt of zero or negative
         printf("Cannot calculate.\n");
         return;
    }

    gamma = 1.0 / sqrt(1.0 - beta_squared);
    momentum = gamma * rest_mass * velocity;
    printf("The relativistic momentum is approximately %.2e kg m/s\n", momentum);
}

// 24. Gravitational Potential Energy
// U = -G * m1 * m2 / r (for two point masses)
void gravitational_potential_energy() {
    double m1, m2, r; // Masses of two objects and distance between them
    double potential_energy; // Gravitational potential energy

    printf("\nGravitational Potential Energy Calculation:\n");
    printf("Enter the mass of the first object (kg): ");
    m1 = get_double_input();
    if (isnan(m1)) return;

    printf("Enter the mass of the second object (kg): ");
    m2 = get_double_input();
    if (isnan(m2)) return;

    printf("Enter the distance between the centers of the two objects (m): ");
    r = get_double_input();
    if (isnan(r) || r <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    potential_energy = -G * m1 * m2 / r;
    printf("The gravitational potential energy is approximately %.2e Joules (J)\n", potential_energy);
}

// 25. Eddington Luminosity
// L_Edd = (4 * pi * G * M * c) / kappa
// Assuming kappa is the electron scattering opacity for ionized Hydrogen: kappa = sigma_T / m_p
// L_Edd = (4 * pi * G * M * c * m_p) / sigma_T
void eddington_luminosity() {
    double mass; // M (kg)
    double eddington_luminosity_val; // L_Edd (W)

    // Constant factor = 4 * pi * G * c * m_p / sigma_T
    const double EDDINGTON_FACTOR = 4.0 * PI * G * C * MP / THOMSON_CROSS_SECTION;

    printf("\nEddington Luminosity Calculation (for Hydrogen plasma):\n");
    printf("Enter the mass of the central object (kg): ");
    mass = get_double_input();
    if (isnan(mass) || mass <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    eddington_luminosity_val = EDDINGTON_FACTOR * mass;
    printf("The Eddington luminosity is approximately %.2e W\n", eddington_luminosity_val);
}

// 26. Maxwell-Boltzmann Distribution Peak Speed
// V_peak = sqrt(2 * k * T / m)
void maxwell_boltzmann_peak_speed() {
    double temperature; // T (K)
    double particle_mass; // m (kg)
    double peak_speed; // V_peak (m/s)

    printf("\nMaxwell-Boltzmann Distribution Peak Speed Calculation:\n");
    printf("Enter the temperature of the gas (K): ");
    temperature = get_double_input();
    if (isnan(temperature) || temperature < 0) { // Temperature can be 0
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

    printf("Enter the mass of a single gas particle (kg): ");
    particle_mass = get_double_input();
    if (isnan(particle_mass) || particle_mass <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    // Avoid sqrt of negative if temperature is 0
    if (temperature < 0) { // Should be caught by validation, but double check
        printf("Cannot calculate.\n");
        return;
    }

    peak_speed = sqrt(2.0 * K * temperature / particle_mass);
    printf("The peak speed is approximately %.2f m/s\n", peak_speed);
}

// 27. Relativistic Total Energy
// E = gamma * m0 * c^2
void relativistic_total_energy() {
    int sub_choice;
    double rest_mass; // m0 (kg)
    double velocity; // v (m/s)
    double momentum; // p (kg m/s)
    double total_energy; // E (J)
    double gamma;
    double beta_squared; // v^2/c^2

    printf("\nRelativistic Total Energy Calculation:\n");
    printf("1. Calculate from Rest Mass and Velocity\n");
    printf("2. Calculate from Rest Mass and Momentum\n");
    printf("Enter your choice: ");

    sub_choice = get_integer_input();

    if (sub_choice == 1) { // Calculate from Rest Mass and Velocity
        printf("Enter the rest mass (kg): ");
        rest_mass = get_double_input();
        if (isnan(rest_mass) || rest_mass < 0) {
            printf("Invalid input. Must be non-negative.\n");
            return;
        }

        printf("Enter the velocity of the object (m/s): ");
        velocity = get_double_input();
        if (isnan(velocity) || fabs(velocity) >= C) { // Velocity must be less than c
            printf("Invalid input. Velocity must be less than the speed of light.\n");
            return;
        }

        beta_squared = (velocity * velocity) / (C * C);

        if (1.0 - beta_squared <= 0) { // Avoid sqrt of zero or negative
             printf("Cannot calculate.\n");
             return;
        }

        gamma = 1.0 / sqrt(1.0 - beta_squared);
        total_energy = gamma * rest_mass * C * C;
        printf("The relativistic total energy is approximately %.2e Joules (J)\n", total_energy);

    } else if (sub_choice == 2) { // Calculate from Rest Mass and Momentum
        printf("Enter the rest mass (kg): ");
        rest_mass = get_double_input();
        if (isnan(rest_mass) || rest_mass < 0) {
            printf("Invalid input. Must be non-negative.\n");
            return;
        }

        printf("Enter the momentum (kg m/s): ");
        momentum = get_double_input();
        if (isnan(momentum)) return; // Momentum can be zero or negative depending on direction, but formula uses magnitude

        // E^2 = (pc)^2 + (m0c^2)^2
        // E = sqrt((p*c)^2 + (m0*c^2)^2)
        total_energy = sqrt(pow(momentum * C, 2) + pow(rest_mass * C * C, 2));
        printf("The relativistic total energy is approximately %.2e Joules (J)\n", total_energy);

    } else {
        printf("Invalid choice.\n");
    }
}

// 28. Tidal Force (Simplified)
// F_tidal ~ 2 * G * M_source * R_object / R_distance^3
void tidal_force() {
    double m_source; // Mass of the source object (kg)
    double r_distance; // Distance from source center to other object center (m)
    double r_object; // Size (radius or characteristic length) of the other object (m)
    double tidal_force_val; // Tidal force difference (N)

    printf("\nTidal Force Calculation (Simplified):\n");
    printf("Enter the mass of the source object (kg): ");
    m_source = get_double_input();
    if (isnan(m_source) || m_source < 0) {
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

    printf("Enter the distance from the source object's center to the center of the other object (m): ");
    r_distance = get_double_input();
    if (isnan(r_distance) || r_distance <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    printf("Enter the size (diameter or characteristic length) of the other object (m): ");
    r_object = get_double_input();
     if (isnan(r_object) || r_object < 0) {
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

    // Avoid division by zero or very small distance cubed
    if (r_distance == 0) {
         printf("Cannot calculate.\n");
         return;
    }

    // F_tidal = 2 * G * M_source * R_object / R_distance^3
    tidal_force_val = 2.0 * G * m_source * r_object / pow(r_distance, 3);
    printf("The approximate tidal force difference across the object is %.2e N\n", tidal_force_val);
}

// 29. Plasma Frequency
// omega_p = sqrt(n_e * e^2 / (epsilon_0 * m_e))
// f_p = omega_p / (2 * pi)
void plasma_frequency() {
    double electron_density; // n_e (electrons/m^3)
    double plasma_frequency_val; // f_p (Hz)

    printf("\nPlasma Frequency Calculation:\n");
    printf("Enter the number density of electrons (electrons/m^3): ");
    electron_density = get_double_input();
    if (isnan(electron_density) || electron_density < 0) {
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

    // Avoid sqrt of negative or division by zero
    if (electron_density < 0 || VACUUM_PERMITTIVITY == 0 || ME == 0) { // ME and epsilon_0 are constants, should not be zero
         printf("Cannot calculate.\n");
         return;
    }

    // omega_p = sqrt(n_e * e^2 / (epsilon_0 * m_e))
    double omega_p = sqrt(electron_density * ELECTRON_CHARGE_SQ / (VACUUM_PERMITTIVITY * ME));

    // f_p = omega_p / (2 * pi)
    plasma_frequency_val = omega_p / (2.0 * PI);

    printf("The plasma frequency is approximately %.2e Hz\n", plasma_frequency_val);
}

// 30. Debye Length
// lambda_D = sqrt(epsilon_0 * k * T / (n_e * e^2))
void debye_length() {
    double temperature; // T (K)
    double electron_density; // n_e (electrons/m^3)
    double debye_length_val; // lambda_D (m)

    printf("\nDebye Length Calculation:\n");
    printf("Enter the temperature of the plasma (K): ");
    temperature = get_double_input();
    if (isnan(temperature) || temperature < 0) {
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

    printf("Enter the number density of electrons (electrons/m^3): ");
    electron_density = get_double_input();
    if (isnan(electron_density) || electron_density < 0) {
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

     // Avoid sqrt of negative or division by zero
    if (electron_density == 0 || ELECTRON_CHARGE_SQ == 0 || VACUUM_PERMITTIVITY == 0 || K == 0 || temperature < 0) {
         printf("Cannot calculate.\n");
         return;
    }

    // lambda_D = sqrt(epsilon_0 * k * T / (n_e * e^2))
    debye_length_val = sqrt(VACUUM_PERMITTIVITY * K * temperature / (electron_density * ELECTRON_CHARGE_SQ));

    printf("The Debye length is approximately %.2e m\n", debye_length_val);
}

// 31. Compton Wavelength
// lambda_c = h / (m * c)
void compton_wavelength() {
    double mass; // Mass of the particle (kg)
    double wavelength; // Compton wavelength (m)

    printf("\nCompton Wavelength Calculation:\n");
    printf("Enter the rest mass of the particle (kg): ");
    mass = get_double_input();
    if (isnan(mass) || mass <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    // lambda_c = h / (m * c)
    wavelength = H / (mass * C);
    printf("The Compton wavelength is approximately %.2e m\n", wavelength);
}

// 32. Gravitational Redshift (Weak Field Approximation)
// z ~ G * M / (r * c^2)
void gravitational_redshift() {
    double mass; // Mass of the gravitational source (kg)
    double distance; // Distance from the center of the source (m)
    double redshift; // Gravitational redshift (dimensionless)

    printf("\nGravitational Redshift Calculation (Weak Field Approximation):\n");
    printf("Enter the mass of the gravitational source (kg): ");
    mass = get_double_input();
    if (isnan(mass) || mass < 0) {
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

    printf("Enter the distance from the center of the source (m): ");
    distance = get_double_input();
    if (isnan(distance) || distance <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    // Avoid division by zero
    if (distance == 0) {
         printf("Cannot calculate.\n");
         return;
    }

    // z ~ G * M / (r * c^2)
    redshift = G * mass / (distance * C * C);
    printf("The gravitational redshift is approximately %.4e\n", redshift);
}

// 33. Relativistic Kinetic Energy
// K = (gamma - 1) * m0 * c^2
void relativistic_kinetic_energy() {
    double rest_mass; // m0 (kg)
    double velocity; // v (m/s)
    double kinetic_energy; // K (J)
    double gamma;
    double beta_squared; // v^2/c^2

    printf("\nRelativistic Kinetic Energy Calculation:\n");
    printf("Enter the rest mass of the object (kg): ");
    rest_mass = get_double_input();
    if (isnan(rest_mass) || rest_mass < 0) {
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

    printf("Enter the velocity of the object (m/s): ");
    velocity = get_double_input();
    if (isnan(velocity) || fabs(velocity) >= C) { // Velocity must be less than c
        printf("Invalid input. Velocity must be less than the speed of light.\n");
        return;
    }

    beta_squared = (velocity * velocity) / (C * C);

    if (1.0 - beta_squared <= 0) { // Avoid sqrt of zero or negative
         printf("Cannot calculate.\n");
         return;
    }

    gamma = 1.0 / sqrt(1.0 - beta_squared);

    // K = (gamma - 1) * m0 * c^2
    kinetic_energy = (gamma - 1.0) * rest_mass * C * C;
    printf("The relativistic kinetic energy is approximately %.2e Joules (J)\n", kinetic_energy);
}

// 34. Photon Wavelength from Energy
// E = h * c / lambda  =>  lambda = h * c / E
void photon_wavelength_from_energy() {
    double energy; // Energy of the photon (J)
    double wavelength; // Wavelength (m)

    printf("\nPhoton Wavelength from Energy Calculation:\n");
    printf("Enter the energy of the photon (J): ");
    energy = get_double_input();
    if (isnan(energy) || energy <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    // lambda = h * c / E
    wavelength = H * C / energy;
    printf("The photon wavelength is approximately %.2e m\n", wavelength);
}

// 35. Schwarzschild Time Dilation
// dt = dt_0 / sqrt(1 - Rs/r)
// dt is time in observer's frame, dt_0 is proper time, Rs is Schwarzschild radius, r is distance from center
void schwarzschild_time_dilation() {
    double proper_time; // dt_0 (s)
    double mass; // Mass of the gravitational source (kg)
    double distance; // Distance from the center of the source (m)
    double dilated_time; // dt (s)
    double schwarzschild_r; // Rs (m)
    double sqrt_term; // 1 - Rs/r

    printf("\nSchwarzschild Time Dilation Calculation:\n");
    printf("Enter the proper time interval (time far from the gravitational source) (s): ");
    proper_time = get_double_input();
    if (isnan(proper_time) || proper_time < 0) {
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

    printf("Enter the mass of the gravitational source (kg): ");
    mass = get_double_input();
    if (isnan(mass) || mass <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    printf("Enter the distance from the center of the source (m): ");
    distance = get_double_input();
    if (isnan(distance) || distance <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    // Calculate Schwarzschild radius
    schwarzschild_r = 2 * G * mass / (C * C);

    // Check for event horizon or inside
    if (distance <= schwarzschild_r) {
        printf("Cannot calculate time dilation at or inside the Schwarzschild radius.\n");
        return;
    }

    // Calculate the term inside the square root
    sqrt_term = 1.0 - (schwarzschild_r / distance);

    // Check for sqrt of negative (should be covered by distance check, but good practice)
    if (sqrt_term < 0) {
         printf("Cannot calculate time dilation (sqrt of negative).\n");
         return;
    }

    // dt = dt_0 / sqrt(1 - Rs/r)
    dilated_time = proper_time / sqrt(sqrt_term);
    printf("The dilated time interval (time at distance %.2e m from source) is approximately %.2e s\n", distance, dilated_time);
}

// New Function: Orbital Period (Kepler's Third Law - Simplified)
// T = 2 * pi * sqrt(a^3 / (G * M)), assuming M_central >> m_orbiting
void orbital_period() {
    double central_mass; // Mass of the central body (kg)
    double semi_major_axis; // Semi-major axis of the orbit (m)
    double period; // Orbital period (s)

    printf("\nOrbital Period Calculation (Kepler's Third Law - Simplified):\n");
    printf("Enter the mass of the central body (kg): ");
    central_mass = get_double_input();
    if (isnan(central_mass) || central_mass <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    printf("Enter the semi-major axis of the orbit (m): ");
    semi_major_axis = get_double_input();
    if (isnan(semi_major_axis) || semi_major_axis <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    // Check for division by zero or sqrt of negative
    if (central_mass == 0 || semi_major_axis <= 0) {
        printf("Cannot calculate.\n");
        return;
    }

    // T = 2 * pi * sqrt(a^3 / (G * M))
    period = 2.0 * PI * sqrt(pow(semi_major_axis, 3) / (G * central_mass));
    printf("The orbital period is approximately %.2e seconds\n", period);
}

// New Function: Magnetic Pressure
// P_B = B^2 / (2 * mu_0)
void magnetic_pressure() {
    double magnetic_field; // Magnetic field strength (T)
    double pressure; // Magnetic pressure (Pa)

    printf("\nMagnetic Pressure Calculation:\n");
    printf("Enter the magnetic field strength (Tesla): ");
    magnetic_field = get_double_input();
    if (isnan(magnetic_field)) return; // Magnetic field can be 0

    // P_B = B^2 / (2 * mu_0)
    // Avoid division by zero if mu_0 was somehow 0 (it's a constant)
    if (VACUUM_PERMEABILITY == 0) {
         printf("Cannot calculate.\n");
         return;
    }
    pressure = pow(magnetic_field, 2) / (2.0 * VACUUM_PERMEABILITY);
    printf("The magnetic pressure is approximately %.2e Pa\n", pressure);
}

// New Function: Einstein Radius (Simplified Gravitational Lensing)
// theta_E = sqrt(4 * G * M / (c^2 * D_L)), simplified
void einstein_radius() {
    double lens_mass; // Mass of the lensing object (kg)
    double observer_to_lens_distance; // Distance from observer to lens (m)
    double einstein_radius_rad; // Einstein radius (radians)

    printf("\nEinstein Radius Calculation (Simplified Gravitational Lensing):\n");
    printf("Enter the mass of the lensing object (kg): ");
    lens_mass = get_double_input();
    if (isnan(lens_mass) || lens_mass < 0) {
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

    printf("Enter the distance from the observer to the lens (m): ");
    observer_to_lens_distance = get_double_input();
    if (isnan(observer_to_lens_distance) || observer_to_lens_distance <= 0) {
        printf("Invalid input. Must be greater than 0.\n");
        return;
    }

    // Check for sqrt of negative or division by zero
    if (lens_mass < 0 || observer_to_lens_distance <= 0 || C == 0) {
         printf("Cannot calculate.\n");
         return;
    }

    // theta_E = sqrt(4 * G * M / (c^2 * D_L))
    einstein_radius_rad = sqrt(4.0 * G * lens_mass / (C * C * observer_to_lens_distance));
    printf("The Einstein radius is approximately %.2e radians\n", einstein_radius_rad);
}

// New Function: Non-relativistic Kinetic Energy
// K = 0.5 * m * v^2
void non_relativistic_kinetic_energy() {
    double mass; // Mass of the object (kg)
    double velocity; // Velocity of the object (m/s)
    double kinetic_energy; // Kinetic energy (J)

    printf("\nKinetic Energy Calculation (Non-relativistic):\n");
    printf("Enter the mass of the object (kg): ");
    mass = get_double_input();
    if (isnan(mass) || mass < 0) {
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

    printf("Enter the velocity of the object (m/s): ");
    velocity = get_double_input();
    if (isnan(velocity)) return; // Velocity can be 0

    // K = 0.5 * m * v^2
    kinetic_energy = 0.5 * mass * pow(velocity, 2);
    printf("The non-relativistic kinetic energy is approximately %.2e Joules (J)\n", kinetic_energy);
}

// New Function: Hubble Parameter at Redshift (Simplified Cosmology)
// H(z) = H0 * sqrt(Omega_m * (1+z)^3 + Omega_Lambda)
void hubble_parameter_at_redshift() {
    double redshift; // Redshift z
    double h_at_z; // Hubble parameter at redshift z (km/s/Mpc)

    printf("\nHubble Parameter at Redshift Calculation (Simplified Cosmology):\n");
    printf("Enter the redshift z (z >= 0): ");
    redshift = get_double_input();
    if (isnan(redshift) || redshift < 0) {
        printf("Invalid input. Must be non-negative.\n");
        return;
    }

    // H(z) = H0 * sqrt(Omega_m * (1+z)^3 + Omega_Lambda)
    // Ensure the term inside the square root is non-negative
    double term_inside_sqrt = OMEGA_M * pow(1.0 + redshift, 3) + OMEGA_L;
    if (term_inside_sqrt < 0) {
        printf("Cannot calculate (term inside sqrt is negative).\n");
        return;
    }

    h_at_z = H0_KMS_MPC * sqrt(term_inside_sqrt);
    printf("The Hubble parameter at redshift z = %.2f is approximately %.2f km/s/Mpc\n", redshift, h_at_z);
}
