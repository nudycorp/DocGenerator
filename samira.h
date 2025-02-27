#pragma once

#include "builder.h"

class Samira {
private:
    Builder* builder;

public:
    explicit Samira(Builder* builder) : builder(builder) {}

    void makeSite() const;

    void changeBuilder(Builder* builder);
};

#include "samira.cpp"