#pragma once
#include "../builder.h"

class BuilderText: public Builder {
string _text;

public:
    BuilderText() : _text("") {}

    virtual void addText(const string && text) {
        _text += text;
    };

    virtual void addBoldText(const string && text) {
        _text += text;
    }

    virtual void addItalicText(const string && text) {
        _text += text;
    }

    virtual void addBoldItalicText(const string && text) {
        _text += text;
    }

    virtual void addParagraph(const string && text) {
        _text += '\n' + text + '\n';
    }

    virtual void addHeader(const string && text) {
        _text += '\n' + text + '\n';
    }

    virtual void addImage(const string &&path, const string &&description) {
        _text += '\n' + description;
    }

    virtual void addLink(const string &&link, const string &&text) {
        _text += '\n' + text;
    }

    virtual void addOrderedList(const vector<string> &&list) {
        int n = list.size();
        for (int i = 0; i < n; i++) {
            _text += "\n    " + to_string(i + 1) + ". " + list[i];
        }
        _text += '\n';
    }

    virtual void addMarkedList(const vector<string> &&list) {
        for (auto& s : list) {
            _text += "\n    - " + s;
        }
        _text += '\n';
    }

    virtual string getResult() const {
        return _text;
    };
};