# Basic Matrix Operations Tool

[![Language](https://img.shields.io/badge/language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Platform](https://img.shields.io/badge/platform-Linux%20%7C%20macOS%20%7C%20Windows-lightgrey.svg)]()

*(🇹🇷 Türkçe versiyon için [aşağıya kaydırın](#temel-matris-işlemleri-aracı--türkçe-versiyon).*

## About The Project

**Basic Matrix Operations Tool** is an interactive, modular command-line application built with the C programming language. Its primary purpose is to handle essential matrix computations accurately and efficiently, eliminating the risk of manual calculation errors. It is designed for both students and professionals seeking a reliable and lightweight tool for solving matrix-related problems.

### Features

* **Core Mathematical Operations:** Perform Matrix Addition, Subtraction, Multiplication, and Transposition.
* **Input Validation & Protection:** Automatically validates matrix dimensions before executing operations (e.g., ensures `columns of Matrix A == rows of Matrix B` for multiplication).
* **Interactive CLI:** Features a user-friendly, menu-driven interface with color-coded prompts and error messages for better readability.
* **Efficient Data Structures:** Utilizes fixed-size 2D arrays (up to 10x10) to efficiently store and manipulate matrix data in memory.

## Getting Started

To get a local copy up and running, follow these simple steps.

### Prerequisites

You need a C compiler installed on your system (e.g., GCC, Clang). 
* **Windows:** MinGW or WSL is recommended.
* **macOS:** Install Xcode Command Line Tools (`xcode-select --install`).
* **Linux:** Usually pre-installed (If not, run `sudo apt install build-essential`).

### Installation & Compilation

1. Clone the repository or download the source code files.
2. Open your terminal or command prompt and navigate to the project directory.
3. Compile the C file using GCC:
   ```bash
   gcc BasicMatrixOperationsToolProject.c -o matrix_tool
   ```

## Usage

1. Run the compiled executable:
   * **Linux / macOS:** `./matrix_tool`
   * **Windows:** `matrix_tool.exe`
2. You will be greeted by the main menu. Enter the number corresponding to your desired operation (1-5).
3. Follow the on-screen prompts to input the dimensions (Rows & Columns) and the elements of your matrices.
4. The program will compute and display the final matrix, or return a clear error message if the dimensions are incompatible.

## Roadmap

Future upgrades and advanced computations planned for this project include:
- [ ] Support for calculating the Determinant of square matrices.
- [ ] Calculating the Inverse of square matrices.
- [ ] Computing Eigenvalues.
- [ ] Dynamic memory allocation to support matrices larger than 10x10.
- [ ] Integration with external mathematical libraries for advanced numerical methods.

---
<br>

# Temel Matris İşlemleri Aracı (Türkçe Versiyon)

## Proje Hakkında

**Temel Matris İşlemleri Aracı**, C programlama dili ile geliştirilmiş etkileşimli ve modüler bir komut satırı uygulamasıdır. Temel amacı, matris hesaplamalarını doğru ve verimli bir şekilde gerçekleştirerek manuel hesaplama hatalarını ortadan kaldırmaktır. Matris problemleriyle uğraşan öğrenciler ve profesyoneller için güvenilir ve hafif bir araç olarak tasarlanmıştır.

### Özellikler

* **Temel Matematiksel İşlemler:** Matris Toplama, Çıkarma, Çarpma ve Transpoz (Devrik) alma işlemlerini destekler.
* **Giriş Doğrulama (Input Validation):** İşlemleri gerçekleştirmeden önce matris boyutlarını otomatik olarak kontrol eder. (Örn: Çarpma işlemi için birinci matrisin sütun sayısının ikinci matrisin satır sayısına eşit olmasını şart koşar).
* **Etkileşimli Arayüz (CLI):** Okunabilirliği artırmak için renk kodlu uyarılar ve hata mesajları içeren, kullanıcı dostu, menü tabanlı bir arayüze sahiptir.
* **Verimli Veri Yapıları:** Matris verilerini bellekte saklamak ve işlemek için sabit boyutlu (maksimum 10x10) 2 boyutlu diziler (2D arrays) kullanır.

## Başlarken

Projeyi yerel bilgisayarınızda çalıştırmak için aşağıdaki adımları izleyin.

### Gereksinimler

Sisteminizde bir C derleyicisi (GCC, Clang vb.) kurulu olmalıdır.
* **Windows:** MinGW veya WSL tavsiye edilir.
* **macOS:** Xcode Command Line Tools kurulumu gereklidir (`xcode-select --install`).
* **Linux:** Genellikle yüklü gelir. (Yüklü değilse `sudo apt install build-essential` komutunu kullanabilirsiniz).

### Kurulum ve Derleme

1. Projeyi bilgisayarınıza indirin.
2. Terminal veya komut satırını açarak proje dizinine gidin.
3. GCC kullanarak C dosyasını derleyin:
   ```bash
   gcc BasicMatrixOperationsToolProject.c -o matrix_tool
   ```

## Kullanım

1. Derlenmiş programı çalıştırın:
   * **Linux / macOS:** `./matrix_tool`
   * **Windows:** `matrix_tool.exe`
2. Ana menü üzerinden yapmak istediğiniz işlemin numarasını (1-5) girin.
3. Ekrana gelen yönlendirmeleri takip ederek matrislerin boyutlarını (Satır ve Sütun) ve elemanlarını girin.
4. Program sonucu hesaplayarak ekranda gösterecek veya girilen boyutlar işlem için uygun değilse anlaşılır bir hata mesajı verecektir.

## Yol Haritası (Gelecek Planları)

Projenin ilerleyen sürümlerinde eklenmesi planlanan özellikler ve ileri düzey hesaplamalar:
- [ ] Kare matrisler için Determinant hesaplama desteği.
- [ ] Kare matrislerin Tersini (Inverse) alma.
- [ ] Özdeğerleri (Eigenvalues) hesaplama.
- [ ] 10x10'dan daha büyük matrisleri desteklemek için dinamik bellek yönetimi (Dynamic Memory Allocation).
- [ ] İleri düzey sayısal yöntemler için harici matematik kütüphanelerinin entegrasyonu.
