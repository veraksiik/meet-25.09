#include <Windows.h>
#include <iostream>
#include <vector>

class Table {
public:

    Table():
        price_(5'456),
        material_("wood"),
        width_(100),
        high_(90),
        depth_(25),
        countOfLegs_(1),
        name_("Evgenii and Nikusha"),
        article_("207Sd"),
        color_("white")
    {}


    Table(
        std::string material,
        std::string color,
        std::string article,
        std::string name,
        float width,
        float high,
        float depth,
        int countOfLegs,
        int price
    ) 
    {
        material_ = material;
        color_ = color;
        article_ = article;
        name_ = name;
        width_ = width;
        high_ = high;
        depth_ = depth;
        countOfLegs_ = countOfLegs;
        price_ = price;
    }
    






    int Price()const {
        return price_;
    }
    void Price(int newPrice) {
        price_ = newPrice;
    }

    std::string GetMatelial()const {
        return material_;
    }
    void SetMaterial(std::string newMaterial) {
        material_ = newMaterial;
    }

    std::string GetArticle()const {
        return article_;
    }
    void SetArticle(std::string newArticle) {
        article_ = newArticle;

    }

    std::string GetName()const {
        return name_;
    }
    void SetName(std::string newName) {
        name_ = newName;
    }

    std::string GetColor()const {
        return color_;
    }
    void SetColor(std::string newColor) {
        color_ = newColor;
    }

    float GetWidht()const {
        return width_;
    }
    void SetWidth(float newWidth) {
        width_ = newWidth;
    }

    float GetHigh()const {
        return high_;
    }
    void SetHigh(float newHigh) {
        high_ = newHigh;
    }

    float GetDepth()const {
        return depth_;
    }
    void SetDepth(float newDepth) {
        depth_ = newDepth;
    }

    int GetCountOfLegs()const {
        return countOfLegs_;
    }
    void SetCountOfLegs(float newCountOfLegs) {
        countOfLegs_ = newCountOfLegs;
    }
    
    float GetVolume()const {
    
        return width_ * high_ * depth_;
    
    }
    void Print()const {
    
        std::cout << "Цена: " << Price() << "\n";
        std::cout << "Артикул: " << GetArticle() << "\n";
        std::cout << "Цвет: " << GetColor() << "\n";
        std::cout << "Колво ног: " << GetCountOfLegs() << "\n";
        std::cout << "Глубина: " << GetDepth() << "\n";
        std::cout << "Высота: " << GetHigh() << "\n";
        std::cout << "Ширина: " << GetWidht() << "\n";
        std::cout << "Материал: " << GetMatelial() << "\n";
        std::cout << "Наименование: " <<GetName() << "\n";
        std::cout << "Объём: " << GetVolume() << "\n";


    }

    

private:
    
    std::string material_;
    std::string color_;
    std::string article_;
    std::string name_;
    float width_;
    float high_;
    float depth_;
    int countOfLegs_;
    int price_;

};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Table myTable;
    myTable.Print();
    
    std::vector<Table> TableCollection;
  
    TableCollection.push_back(myTable);

    TableCollection[0].SetArticle("563Dd");
    TableCollection[0].SetName("Arsenii cool BoY");

    TableCollection[0].Print();

    myTable.SetArticle("132Hd");
    myTable.SetColor("Black");
    myTable.SetCountOfLegs(5);
    myTable.SetDepth(223);
    myTable.SetHigh(100);
    myTable.SetMaterial("plastik");
    myTable.SetName("OOP sheesh");
    myTable.SetWidth(250);
    myTable.Price(9'000'001);


    TableCollection.push_back(myTable);
    std::cout << "\n\n\n\n\n";

    for (auto& el : TableCollection)
    {
        el.Print();
        std::cout << "\n";
    }


    return 0;
}
