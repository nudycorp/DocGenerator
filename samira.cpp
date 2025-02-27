#include "samira.h"

void Samira::makeSite() const {
    builder->addLink("https://t.me/roschlenitel", "Tag me");
    builder->addHeader("Я люблю C++");
    builder->addBoldText("Никогда не откладывай на завтра то, что можешь сделать послезавтра");
    builder->addImage("https://i.insider.com/5bf879c8dde8671b2c7696cd?width=700&format=jpeg&auto=webp", "Счастливая рыба");
    builder->addParagraph("Список умершей рыбы (они не отложили икру на потом):");
    builder->addOrderedList({
        "Дуня",
        "Смешарик",
        "Harry Potter",
    });
    builder->addParagraph("Признаки, что рыба умерла:");
    builder->addMarkedList({
        "передоз",
        "слишком много знала",
        "Avada cedabra",
        "брюхо к верху (греет пузо)",
        "осталась икра",
    });
    builder->addItalicText("Все права ущемлены. 2025");
}

void Samira::changeBuilder(Builder* builder) {
    delete this->builder;
    this->builder = builder;
}