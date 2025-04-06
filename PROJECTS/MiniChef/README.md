

# MiniChef

**MiniChef** is an encryption and decryption tool built using **C** programming. The project allows users to experiment with a variety of cryptographic techniques for both encryption and decoding tasks. It includes support for multiple encryption algorithms, encoding/decoding formats, and additional utilities. 

---

## 🚀 Features

### **Encryption & Decryption Techniques:**
- **Caesar Cipher**: A simple substitution cipher where each letter is shifted by a fixed number of positions.
- **XOR Encryption**: A symmetric encryption method that uses the XOR bitwise operator.
- **ROT13 & ROT47**: Encoding schemes that rotate the characters by 13 (ROT13) or 47 (ROT47) positions.

### **Encoding & Decoding Features:**
- **Base64 Encoding/Decoding**: Used for encoding binary data into ASCII text format.
- **Hexadecimal Encoding/Decoding**: Converts text to its hexadecimal representation and vice versa.
- **URL Encoding/Decoding**: Converts special characters in URLs to a format safe for transmission.
- **ASCII to Binary / Binary to ASCII**: Converts ASCII text to binary and vice versa.

---

## 💻 How to Use

### Command-Line Usage

The program is a command-line tool that accepts various flags for different operations.

**To view the help information:**

```
./minichef -h
```

### Example Usages:

- **Caesar Cipher Encryption:**

    ```
    ./minichef -ce "YourText" 3
    ```

- **XOR Encryption/Decryption:**

    ```
    ./minichef -xor "YourText" 43
    ```

- **Base64 Encoding:**

    ```
    ./minichef -be "YourText"
    ```

- **Binary to ASCII Conversion:**

    ```
    ./minichef -ba "01001000 01100101"
    ```

### Available Commands:

| Command            | Description                                |
|--------------------|--------------------------------------------|
| `-ce "text" key`    | Caesar Cipher Encrypt                      |
| `-cd "text" key`    | Caesar Cipher Decrypt                      |
| `-be "text"`        | Base64 Encode                              |
| `-bd "text"`        | Base64 Decode                              |
| `-he "text"`        | Hexadecimal Encode                         |
| `-hd "text"`        | Hexadecimal Decode                         |
| `-ue "text"`        | URL Encode                                  |
| `-ud "text"`        | URL Decode                                  |
| `-r13 "text"`       | ROT13 Encrypt/Decrypt                      |
| `-r47 "text"`       | ROT47 Encrypt/Decrypt                      |
| `-xor "text" key`   | XOR Encrypt/Decrypt                        |
| `-ab "text"`        | ASCII to Binary                            |
| `-ba "binary"`      | Binary to ASCII                            |

---

## 📂 Installation

1. **Clone the Repository**:

    ```bash
    git clone https://github.com/yourusername/MiniChef.git
    cd MiniChef
    ```

2. **Compile the Program**:

    ```bash
    make
    ```

3. **Run the Tool**:

    ```bash
    ./minichef -h  # To see the available commands
    ```

---

## 🛠️ Tools & Libraries Used

- **C Programming Language**
- **GNU Make**: For building the project

---

## 🚧 Contributing

Feel free to fork this repository and submit pull requests for enhancements or bug fixes. Contributions are welcome! 

