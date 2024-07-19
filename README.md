# OpenMP-cpp
 
## Introduction
This project demonstrates the usage of OpenMP in C++ for parallel programming.

## CPP files
.cpp files have names like test1, test2 etc. I have the code annotated on file.
Use ctrl+A, ctrl+/ to select all and add/remove comment

## Requirements
- CLion IDE
- CMake
- C++ Compiler with OpenMP support (GCC)

## Installation and Setup

### Install MinGW-w64 and Add GCC to System PATH

1. **Install MinGW-w64:**
   - Download and install MinGW-w64 from [SourceForge](https://sourceforge.net/projects/mingw-w64/).
   - During installation, note the path where MinGW-w64 is installed (e.g., `C:\mingw-w64\mingw64\bin`).

2. **Add GCC to System PATH:**
   - Open the Start menu and search for "Environment Variables".
   - Click on "Edit the system environment variables".
   - In the System Properties window, click on the "Environment Variables" button.
   - In the Environment Variables window, find the "Path" variable in the "System variables" section and select it, then click "Edit".
   - Click "New" and add the path to the MinGW-w64 bin directory (e.g., `C:\mingw-w64\mingw64\bin`).
   - Click "OK" to close all the windows.

3. **Verify GCC Installation:**
   - Open a new PowerShell or Command Prompt window and run:
     ```sh
     g++ --version
     ```
   - This should display the version of GCC installed. If not, revisit the PATH configuration.

### Integration with OpenMP-cpp Project

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/kyriakidisdimitrios/OpenMP-cpp.git

### Opening the Project in CLion
1. Launch CLion IDE.
2. Choose `File` -> `Open` and navigate to the `OpenMP-cpp` directory where your project is located.

### Configuring CMake and Building the Project
1. CLion should automatically detect `CMakeLists.txt` in the project root directory.
2. If necessary, click on the "Reload CMake Project" button to ensure CLion has loaded the CMake configuration correctly.
3. Build the project using one of the following methods:
   - Click on the build button in the CLion interface.
   - Use the shortcut `Ctrl + F9` (Windows/Linux) or `Cmd + F9` (Mac).

### Running the Executable
1. After a successful build, you can run the executable:
   - In CLion: Navigate to the Run menu and choose Run 'YourExecutableName'.
   - From the command line: Locate the executable in the build directory (`cmake-build-debug` or `cmake-build-release`) and run it using `./YourExecutableName`.

## Additional Notes
- Make sure your C++ code includes OpenMP directives (`#pragma omp ...`) to utilize parallelism.
- Refer to the official OpenMP documentation for detailed usage and directives.

## Troubleshooting
- If you encounter build issues, double-check your CMake configuration and ensure your compiler supports OpenMP.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.