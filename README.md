# Basic Matrix Operations Tool

*[Türkçe versiyonu için aşağıya kaydırın](#temel-matris-işlemleri-aracı)*

A lightweight and interactive command-line application written in C for performing fundamental matrix operations. 

## Features
* **Matrix Addition:** Adds two matrices of the same dimensions.
* **Matrix Subtraction:** Subtracts one matrix from another of equal dimensions.
* **Matrix Multiplication:** Multiplies two matrices (requires the number of columns in the first matrix to equal the number of rows in the second).
* **Matrix Transpose:** Calculates and displays the transpose of a given matrix.
* **Color-Coded CLI:** Features a colorful and easy-to-read terminal interface using ANSI escape codes.

## Limitations
* The maximum supported matrix size is **10x10**.

## How to Run

1. **Compile the code** using a C compiler (like GCC):
   ```bash
   gcc BasicMatrixOperationsToolProject.c -o matrix_operations
   ```
2. **Run the executable:**
   * On Linux/macOS: `./matrix_operations`
   * On Windows: `matrix_operations.exe`
3. Follow the on-screen menu to input your matrix dimensions and elements.

---
<br>

# Temel Matris İşlemleri Aracı

Temel matris işlemlerini gerçekleştirmek için C programlama diliyle geliştirilmiş hafif ve etkileşimli bir komut satırı uygulamasıdır.

## Özellikler
* **Matris Toplama:** Aynı boyutlara sahip iki matrisi toplar.
* **Matris Çıkarma:** Aynı boyutlara sahip iki matrisin farkını alır.
* **Matris Çarpma:** İki matrisi çarpar (birinci matrisin sütun sayısının, ikinci matrisin satır sayısına eşit olması gerekir).
* **Matris Transpozu:** Verilen bir matrisin devriğini (transpozunu) hesaplar ve ekrana yazdırır.
* **Renkli Arayüz (CLI):** Daha iyi bir kullanıcı deneyimi için renkli ve okunması kolay bir terminal arayüzüne sahiptir.

## Sınırlandırmalar
* Desteklenen maksimum matris boyutu **10x10**'dur.

## Nasıl Çalıştırılır

1. **Kodu derleyin** (örneğin GCC kullanarak):
   ```bash
   gcc BasicMatrixOperationsToolProject.c -o matrix_operations
   ```
2. **Programı çalıştırın:**
   * Linux/macOS'ta: `./matrix_operations`
   * Windows'ta: `matrix_operations.exe`
3. Matris boyutlarınızı ve elemanlarınızı girmek için ekrandaki menüyü takip edin.
