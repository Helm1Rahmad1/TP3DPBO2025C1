# TP3DPBO2025C1

# Janji
Saya Muuhammad Helmi Rahmadi dengan NIM 2311574 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Desain Program
![TP3DPBO2025C1 drawio](https://github.com/user-attachments/assets/21c110d7-9c8f-4a38-83e7-1d5973a3419d)
Diagram ini menggambarkan struktur kelas dalam sebuah sistem komputer, di mana hubungan utama antara kelas-kelas ini terdiri dari `pewarisan (inheritance)` dan `agregasi (aggregation)`. Kelas utama yang menjadi dasar adalah `Komponen`, yang bertindak sebagai superkelas bagi berbagai perangkat keras dalam komputer. Beberapa subclass dari `Komponen` mencakup `CPU`, `RAM`, dan `HardDrive`. Setiap subclass ini memiliki atribut spesifik yang sesuai dengan fungsinya, misalnya `CPU` memiliki jumlah core dan kecepatan clock, `RAM` memiliki kapasitas dan kecepatan, sedangkan `HardDrive` menyimpan informasi tentang kapasitas dan tipe penyimpanannya (HDD atau SSD).

Selain perangkat keras utama, terdapat juga kelas `PowerDevice`, yang berfungsi untuk menangani sumber daya listrik dalam sistem. Dari kelas ini, terdapat subclass `PowerSupply`, yang menangani pasokan daya untuk komputer. Lebih lanjut, terdapat `PowerSupplyGaming`, yang merupakan turunan dari PowerSupply dan memiliki fitur tambahan seperti `dukungan overclocking` serta `pencahayaan RGB` yang umum ditemukan pada perangkat gaming.

Dalam diagram ini, kelas `Komputer` berperan sebagai wadah yang menggabungkan semua komponen penting agar dapat berfungsi sebagai sistem yang utuh. Berbeda dari kelas lain, `Komputer` tidak mewarisi dari `Komponen`, melainkan menghubungkan berbagai bagian menggunakan konsep agregasi, yaitu dengan memiliki objek `CPU`, `RAM`, `HardDrive, PowerSupply`, dan `OS (Operating System)` sebagai bagian dari strukturnya. Dengan demikian, `Komputer` bukan sekadar sebuah komponen, melainkan entitas yang mengelola dan menghubungkan berbagai komponen agar bekerja secara bersama-sama.

# Alur Program
- Inisialisasi: Membuat objek CPU, RAM, HardDrive, PowerSupply.
- Membentuk komputer: Menambahkan komponen ke dalam objek Komputer.
- Menyalakan komputer: Memanggil bootUp(), menampilkan informasi sistem.
- Operasi pada komponen: Melakukan peningkatan atau pengelolaan komponen individu.
- Mematikan komputer: Memanggil shutDown(), mematikan daya

# Dokumentasi

### C++
![2](https://github.com/user-attachments/assets/637de66d-6134-43f3-ab49-e3d35e00933c)
![1](https://github.com/user-attachments/assets/274c239b-1587-4912-9343-d5265a849997)

### Pyhton
![2](https://github.com/user-attachments/assets/f302d7fe-ecf1-4085-87fc-b2ae6fcbbf53)
![1](https://github.com/user-attachments/assets/31e892e0-9ee7-4ec8-b247-55147a74ff48)

### Java
![1](https://github.com/user-attachments/assets/55ccd481-c587-460d-b6f1-9a69ea162365)
![2](https://github.com/user-attachments/assets/8b865b69-d7db-466f-a4f9-c888887551ff)

 
