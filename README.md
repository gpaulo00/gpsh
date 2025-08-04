# GP Shell 🖥️

**A Linux-like command prompt for Nintendo 3DS**

[![Version](https://img.shields.io/badge/version-0.3.6-blue.svg)](https://github.com/gpaulo00/gp-shell)
[![Platform](https://img.shields.io/badge/platform-Nintendo%203DS-red.svg)](https://www.nintendo.com/3ds/)
[![License](https://img.shields.io/badge/license-MIT-green.svg)](LICENSE)
[![Language](https://img.shields.io/badge/language-C-orange.svg)](https://en.wikipedia.org/wiki/C_(programming_language))

## 📖 Overview

GP Shell is a homebrew application that brings a familiar Linux-like command-line interface to the Nintendo 3DS. Built with C and the devkitARM toolchain, it provides an interactive shell environment with variable management, command history, and a virtual keyboard interface optimized for the 3DS dual-screen layout.

## ✨ Features

### 🎮 Interactive Shell Environment
- **Dual-screen interface**: Command output on top screen, virtual keyboard on bottom screen
- **Real-time input**: Touch-based virtual keyboard with multiple layouts
- **Command history**: Navigate through previous commands using D-pad
- **Color-coded output**: Syntax highlighting for better readability

### 🔧 Built-in Commands
- `echo` - Display text messages
- `set` - Create and manage environment variables
- `unset` - Remove environment variables
- `help` - Display available commands and usage
- `sys` - Show system version information
- `quit` - Exit the application
- `hello` - Welcome message
- `gpaulo` - Easter egg command with random messages

### ⌨️ Virtual Keyboard System
- **Multiple layouts**: Lowercase, uppercase, and symbol keyboards
- **Touch controls**: Intuitive touch interface for text input
- **Hardware shortcuts**: 
  - `A` - Enter/Execute command
  - `B` - Backspace
  - `X` - Shift (change keyboard layout)
  - `Y` - Toggle between ABC/123 modes
  - `START` - Exit application
  - `D-pad Up/Down` - Navigate command history

### 💾 Variable Management
- **Environment variables**: Set and use custom variables with `$VARNAME` syntax
- **Dynamic memory allocation**: Efficient memory management for variables
- **Variable persistence**: Variables remain available throughout the session

## 🛠️ Technical Details

### Architecture
- **Platform**: Nintendo 3DS (ARM11 processor)
- **Language**: C
- **Graphics**: sf2d library for 2D rendering
- **Memory management**: Dynamic allocation with proper cleanup
- **Input handling**: Touch and button input processing

### Project Structure
```
├── include/          # Header files
│   ├── main.h       # Main application definitions
│   ├── commands.h   # Command function declarations
│   ├── functions.h  # Utility functions
│   ├── keyboards.h  # Virtual keyboard definitions
│   └── pila.h       # Stack implementation for history
├── source/          # Source code files
│   ├── main.c       # Main application loop
│   ├── commands.c   # Command implementations
│   ├── keyboard*.c  # Virtual keyboard implementations
│   └── *.c         # Additional functionality
├── Makefile         # Build configuration
└── icon.png        # Application icon
```

## 🚀 Installation

### Prerequisites
- **devkitARM**: ARM development toolkit
- **libctru**: 3DS system library
- **sf2d**: 2D graphics library
- **Nintendo 3DS**: With homebrew capability (Custom Firmware)

### Building from Source
```bash
# Clone the repository
git clone https://github.com/yourusername/gp-shell.git
cd gp-shell

# Set up devkitARM environment
export DEVKITARM=/path/to/devkitARM

# Build the project
make

# The compiled .3dsx file will be in the project directory
```

### Installation on 3DS
1. Copy the generated `.3dsx` file to your 3DS SD card
2. Place it in the `/3ds/` folder
3. Launch using the Homebrew Launcher

## 📱 Usage

### Basic Commands
```bash
# Display a message
echo Hello, 3DS World!

# Set environment variables
set USERNAME=gpaulo00
set SYSTEM=3DS

# Use variables in commands
echo Welcome $USERNAME to $SYSTEM

# View all variables
set

# Remove a variable
unset USERNAME

# Get system information
sys

# View available commands
help

# Exit the application
quit
```

### Navigation
- Use the touch screen to interact with the virtual keyboard
- Navigate command history with D-pad Up/Down
- Use hardware buttons for quick actions (A=Enter, B=Backspace, etc.)

## 🎯 Development Highlights

This project demonstrates several key programming concepts and 3DS development techniques:

- **Memory Management**: Dynamic allocation and deallocation of memory for variables and command history
- **Data Structures**: Implementation of stack-based command history using custom data structures
- **Graphics Programming**: 2D texture rendering and multi-screen interface design
- **Input Handling**: Touch screen and button input processing
- **String Processing**: Command parsing, variable substitution, and text manipulation
- **Cross-platform Development**: ARM assembly optimization and embedded systems programming

## 🔮 Future Enhancements

- [ ] File system navigation commands (`ls`, `cd`, `pwd`)
- [ ] Script execution capabilities
- [ ] Configuration file support
- [ ] Additional built-in utilities
- [ ] Network commands (if applicable)
- [ ] Improved error handling and user feedback

## 🤝 Contributing

Contributions are welcome! Please feel free to submit issues, feature requests, or pull requests.

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 👨‍💻 Author

**Gustavo Paulo** - *Initial work and development*
- Email: gustavo.paulo.segura@gmail.com
- GitHub: [@gpaulo00](https://github.com/gpaulo00)

## 🙏 Acknowledgments

- Nintendo 3DS homebrew community
- devkitPro team for the development tools
- sf2d library contributors
- All beta testers and contributors

---

Built with ❤️ for the Nintendo 3DS homebrew community