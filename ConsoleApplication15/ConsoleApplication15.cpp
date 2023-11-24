#include <iostream>

using namespace std;


enum class EntityType {
    Bird,
    Livestock,
    Human
};

struct Characteristic {
    double flightSpeed;
    bool clovenHoofed;
    int IQLevel;
};

struct LivingEntity {
    double movementSpeed;
    EntityType type;
    string color;
};

int main() {

    LivingEntity birdEntity = { 10.5, EntityType::Bird, "Blue" };
    LivingEntity livestockEntity = { 5.4, EntityType::Livestock, "Brown" };
    LivingEntity humanEntity = { 46, EntityType::Human, "White or Black" };


    cout << "bird speed: " << birdEntity.movementSpeed << " km/h" << "\nColor: " << birdEntity.color << "\n" << endl;
    cout << "livestock speed: " << livestockEntity.movementSpeed << " km/h" << "\nColor: " << livestockEntity.color << "\n" << endl;
    cout << "human speed: " << humanEntity.movementSpeed << " km/h" << "\nColor: " << humanEntity.color << "\n" << endl;

    return 0;
}
