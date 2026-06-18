# 🎬 Filmų katalogo sistema

## 📌 Projekto tikslas
Šio projekto tikslas – sukurti C++ konsolinę programą, kuri leidžia valdyti filmų duomenų katalogą. Projekte pritaikomi struktūrinio programavimo principai: funkcijos, ciklai, sąlyginiai sakiniai, struktūros, duomenų saugojimas faile bei jų apdorojimas.

---

## 🎯 Temos aprašymas
Programa skirta filmų katalogo valdymui. Vartotojas gali saugoti informaciją apie filmus (ID, pavadinimą, metus ir įvertinimą), ją redaguoti, ištrinti bei ieškoti reikalingų įrašų.

Visi duomenys saugomi tekstiniame faile, todėl programą paleidus iš naujo duomenys neišnyksta.

---

## ⚙️ Programos funkcionalumas

### 🔹 CRUD operacijos

Programoje įgyvendintos visos pagrindinės operacijos:

- ✅ **Create (sukurti)**  
  Vartotojas gali pridėti naują filmą į katalogą.

- ✅ **Read (skaityti)**  
  Atvaizduojami visi kataloge esantys filmai.

- ✅ **Update (atnaujinti)**  
  Leidžia redaguoti filmą pagal jo ID.

- ✅ **Delete (ištrinti)**  
  Leidžia ištrinti filmą pagal ID.

---

## ⭐ Papildomos funkcijos

### 🔍 1. Paieška (Search)
Leidžia rasti filmus pagal pavadinimą.

- Vartotojas įveda tekstą
- Programa suranda visus filmus, kurių pavadinime yra tas tekstas

Pvz.:

Įvestis: In
Rezultatas: Inception, Interstellar

---

### 📊 2. Rikiavimas (Sorting)
Leidžia surikiuoti filmus pagal įvertinimą.

- Filmai rikiuojami nuo geriausio iki prasčiausio
- Naudojama `sort()` funkcija ir lambda

---

## 📁 Naudojamų failų aprašymas

### 🔹 `main.cpp`
Pagrindinis programos failas, kuriame įgyvendinta visa logika:
- duomenų nuskaitymas
- CRUD operacijos
- papildomos funkcijos

---

### 🔹 `movies.txt`
Failas, kuriame saugomi visi filmų duomenys.

---

## 📄 Duomenų formatas faile

Duomenys saugomi struktūruotu tekstiniu formatu, naudojant `;` kaip skyriklį:

ID;Pavadinimas;Metai;Įvertinimas

### ✅ Pavyzdys:
1;Inception;2010;8.8
2;Interstellar;2014;8.6
3;Titanic;1997;7.8
4;The Dark Knight;2008;9.0

---

## ▶️ Programos paleidimo instrukcija

1. Atsisiųsti projektą:
git clone https://github.com/raudzius/Movie-Catalog-System.git

2. Atidaryti projektą C++ aplinkoje:
- Code::Blocks
- Visual Studio
- arba kita aplinka

3. Įsitikinti, kad failas `movies.txt` yra programos kataloge

4. Sukompiliuoti programą

5. Paleisti programą

6. Naudotis meniu pasirinkimais:
1 - Rodyti filmus
2 - Pridėti filmą
3 - Redaguoti filmą
4 - Ištrinti filmą
5 - Paieška
6 - Rikiuoti
0 - Išeiti

---

## 💻 Naudotos technologijos ir konstrukcijos

Projekte panaudota:

- ✅ Kintamieji ir duomenų tipai (`int`, `string`, `double`)
- ✅ Sąlygos (`if`, `switch`)
- ✅ Ciklai (`for`, `while`, `do-while`)
- ✅ Funkcijos
- ✅ Struktūra (`struct Movie`)
- ✅ Duomenų kolekcija (`vector`)
- ✅ Failų skaitymas (`ifstream`)
- ✅ Failų rašymas (`ofstream`)
- ✅ `stringstream` duomenų apdorojimui
- ✅ `algorithm` funkcijos (`sort`, `remove_if`)

---

## ⚠️ Pastabos

- Duomenys saugomi naudojant `;` skyriklį
- `cin.ignore()` naudojamas išvengti įvesties problemų su `getline`
- `vector` naudojamas filmų sąrašui saugoti
- Programoje naudojamos lambda funkcijos rikiavimui
