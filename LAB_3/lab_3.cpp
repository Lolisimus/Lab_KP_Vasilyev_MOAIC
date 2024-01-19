//�������� ������ ����� �9122-02.03.03��, ���� 3
//������������ �������� "Factory Method"
#include <iostream>
#include <string>

// ����� "���������"
class Computer {
private:
    std::string model;
    int price;

public:
    Computer(const std::string& model, int price) : model(model), price(price) {}

    void info() const {
        std::cout << "Model: " << model << ", Price: $" << price << std::endl;
    }
};

// ����� "����"
class Mouse {
private:
    std::string brand;
    std::string type;

public:
    Mouse(const std::string& brand, const std::string& type) : brand(brand), type(type) {}

    void info() const {
        std::cout << "Brand: " << brand << ", Type: " << type << std::endl;
    }
};

// ������� ��� ������������ ����������� � �����
class Factory {
public:
    static Computer createComputer(const std::string& model, int price) {
        return Computer(model, price);
    }

    static Mouse createMouse(const std::string& brand, const std::string& type) {
        return Mouse(brand, type);
    }
};

int main() {
    // ������� ��������� � ������� �������
    Computer computer = Factory::createComputer("Lenovo", 1000);
    computer.info();

    // ������� ���� � ������� �������
    Mouse mouse = Factory::createMouse("Logitech", "Wireless");
    mouse.info();

    return 0;
}


//������� "��������� �����" �� C++ ������ ��������� ������:

//��������� ���������� ��� �� ���������� ������� ���������, �������� ��� �������� ������ � ����������� ����������� ��������. ���������� ���, ������������ ��������� �����, �� ������� �� ���������� ���������� ���������, ��� �������� ���������� � ��������� ����.

//������������ �������� � �������� ��������. ��������� ����� ������������� ����� ��������� ��� �������� ��������, ��� ���� ��������� ������� ��������� ������, ����� ������ ������ ���������� ���������. ��� �������� ���������� ����� ����� ��������� ��� ��������� ������������� ����.

//������������ ������� �������� �����������. ���������� ��� ������� �� ������������ ���������� ��������� � ��������, � �� �� ���������� ������� ��������� ��� ����������. ��� ��������� ��������� ����� �������������� ������� � �������� ������������ � ����������� ����.

//�������� ������������� ����. ��� ���������� ����� ������� ��������� ��� ���������� �� ��������� �������� ������������ ���������� ���. ���������� ������� ����� �������� ��������� � ��������, ����������� ��������� ����������������.

//��������� ��������� ��������� �������� �������� � ����� �����. ��������� ����� ������������ ������� �������� �������� ������ ������� ����������, ��� ����� ���� ��������, ��������, ��� ��������� ������������ ��� ��� �������� ��� ��������� ���������������.