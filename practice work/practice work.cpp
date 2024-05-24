// Інкаспуляція 1 та 3 завдання.
// Клас Студент
#include <iostream>

using namespace std;

class Student {
private:
    string name;
    int age;
    float averageScore;

public:
    void setName(const string& studentName) {
        name = studentName;
    }

    string getName() const {
        return name;
    }

    void setAge(int studentAge) {
        age = studentAge;
    }

    int getAge() const {
        return age;
    }

    void setAverageScore(float studentAverageScore) {
        averageScore = studentAverageScore;
    }

    float getAverageScore() const {
        return averageScore;
    }

    void printInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Average score: " << averageScore << endl;
    }
};

int main() {
    Student student1;


    student1.setName("John F. Kennedy");
    student1.setAge(21);
    student1.setAverageScore(90.1);

    student1.printInfo();

    return 0;
}
// Клас Книга
#include <iostream>

using namespace std;

class Book {
private:
    string title;
    string author;
    string genre;
    int yearOfPublication;

public:
    void setTitle(const string& bookTitle) {
        title = bookTitle;
    }

    string getTitle() const {
        return title;
    }

    void setAuthor(const string& bookAuthor) {
        author = bookAuthor;
    }

    string getAuthor() const {
        return author;
    }

    void setGenre(const string& bookGenre) {
        genre = bookGenre;
    }

    string getGenre() const {
        return genre;
    }

    void setYearOfPublication(int bookYear) {
        yearOfPublication = bookYear;
    }

    int getYearOfPublication() const {
        return yearOfPublication;
    }

    void printInfo() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Genre: " << genre << endl;
        cout << "Year of publication: " << yearOfPublication << endl;
    }
};

int main() {
 
    Book book1;

    book1.setTitle("The Godfather");
    book1.setAuthor("Mario Puzo");
    book1.setGenre("Crime novel");
    book1.setYearOfPublication(1969);

    book1.printInfo();

    return 0;
}

//Наслідування
// Транспортний засіб
#include <iostream>

using namespace std;

//Транспортний засіб
class Vehicle {
private:
    float speed;
    int enginePower;

public:
    
    Vehicle(float initialSpeed, int initialEnginePower) {
        speed = initialSpeed;
        enginePower = initialEnginePower;
    }

    float getSpeed() const {
        return speed;
    }

    void setSpeed(float newSpeed) {
        speed = newSpeed;
    }

    int getEnginePower() const {
        return enginePower;
    }

    void setEnginePower(int newEnginePower) {
        enginePower = newEnginePower;
    }

 
    virtual void printInfo() const = 0;
};

//Легковий автомобіль
class Car : public Vehicle {
public:
    
    Car(float initialSpeed, int initialEnginePower) : Vehicle(initialSpeed, initialEnginePower) {}

    
    float getMaximumLoad() const {
        return enginePower * 0.5; 
    }

    
    void printInfo() const override {
        cout << "Vehicle type: Passenger car" << endl;
        cout << "Speed: " << getSpeed() << " km/hour" << endl;
        cout << "Engine power: " << getEnginePower() << " horse power " << endl;
        cout << "Max weight: " << getMaximumLoad() << " kg" << endl;
    }
};

//Вантажівка
class Truck : public Vehicle {
public:
    Truck(float initialSpeed, int initialEnginePower) : Vehicle(initialSpeed, initialEnginePower) {}

    
    float getMaximumLoad() const {
        return enginePower * 2; 
    }

    
    void printInfo() const override {
        cout << "Vehicle type: Truck" << endl;
        cout << "Speed: " << getSpeed() << " km/hour" << endl;
        cout << "Engine power: " << getEnginePower() << " horse power " << endl;
        cout << "Max weight: " << getMaximumLoad() << " Kg " << endl;
    }
};
//Мотоцикл
class Motorcycle : public Vehicle {
public:
    
    Motorcycle(float initialSpeed, int initialEnginePower) : Vehicle(initialSpeed, initialEnginePower) {}

    void printInfo() const override {
        cout << "Vehicle type: Motorcycle" << endl;
        cout << "Speed: " << getSpeed() << " km/hour " << endl;
        cout << "Engine power: " << getEnginePower() << " horse power " << endl;
    }
};

int main() {
    Car car(180, 150);
    Truck truck(100, 300);
    Motorcycle motorcycle(200, 100);

    car.printInfo();
    cout << endl;
    truck.printInfo();
    cout << endl;
    motorcycle.printInfo();

    return 0;
}
//Електронні пристрої
#include <iostream>

using namespace std;

//Електронний пристрій
class ElectronicDevice {
private:
    string name;
    float screenSize;

public:
   
    ElectronicDevice(const string& initialName, float initialScreenSize) {
        name = initialName;
        screenSize = initialScreenSize;
    }

  
    const string& getName() const {
        return name;
    }

    void setName(const string& newName) {
        name = newName;
    }

    float getScreenSize() const {
        return screenSize;
    }

    void setScreenSize(float newScreenSize) {
        screenSize = newScreenSize;
    }

    virtual void printInfo() const = 0;
};

//Смартфон
class Smartphone : public ElectronicDevice {
private:
    string operatingSystem;

public:

    Smartphone(const string& initialName, float initialScreenSize, const string& initialOperatingSystem)
        : ElectronicDevice(initialName, initialScreenSize) {
        operatingSystem = initialOperatingSystem;
    }

    void setOperatingSystem(const string& newOperatingSystem) {
        operatingSystem = newOperatingSystem;
    }

    void printInfo() const override {
        cout << "Type of device: Smartphone" << endl;
        cout << "Name: " << getName() << endl;
        cout << "Size of screen: " << getScreenSize() << " inches " << endl;
        cout << "Operating System: " << operatingSystem << endl;
    }
};

//Планшет
class Tablet : public ElectronicDevice {
private:
    string operatingSystem;

public:
    Tablet(const string& initialName, float initialScreenSize, const string& initialOperatingSystem)
        : ElectronicDevice(initialName, initialScreenSize) {
        operatingSystem = initialOperatingSystem;
    }

    void setOperatingSystem(const string& newOperatingSystem) {
        operatingSystem = newOperatingSystem;
    }

    void printInfo() const override {
        cout << "Type of device: Tablet" << endl;
        cout << "Name: " << getName() << endl;
        cout << "Size of screen: " << getScreenSize() << " inches " << endl;
        cout << "Operating System: " << operatingSystem << endl;
    }
};

//Ноутбук
class Laptop : public ElectronicDevice {
private:
    string operatingSystem;

public:
    Laptop(const string& initialName, float initialScreenSize, const string& initialOperatingSystem)
        : ElectronicDevice(initialName, initialScreenSize) {
        operatingSystem = initialOperatingSystem;
    }

    void setOperatingSystem(const string& newOperatingSystem) {
        operatingSystem = newOperatingSystem;
    }

    void printInfo() const override {
        cout << "Type of device: Laptop" << endl;
        cout << "Name: " << getName() << endl;
        cout << "Size of screen: " << getScreenSize() << "inches " << endl;
        cout << "Operating System: " << operatingSystem << endl;
    }
};

int main() {
    Smartphone smartphone("Iphone 14 Pro Max ", 6.69, "IOS 16");
    Tablet tablet("iPad Air 5", 10.9, "iPadOS 15");
    Laptop laptop("Razer Blade 16", 16, "Windows 11");

    smartphone.printInfo();
    cout << endl;
    tablet.printInfo();
    cout << endl;
    laptop.printInfo();
    cout << endl;
    return 0;
}
    