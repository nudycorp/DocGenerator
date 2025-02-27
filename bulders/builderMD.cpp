#pragma once
#include "../builder.h"

class BuilderMarkDown: public Builder {
string _text;

public:
    BuilderMarkDown() : _text("") {}

    virtual void addText(const string && text) {
        _text += " " + text;
    };

    virtual void addBoldText(const string && text) {
        _text += " **" + text + "**";
    }

    virtual void addItalicText(const string && text) {
        _text += " *" + text + "*";
    }

    virtual void addBoldItalicText(const string && text) {
        _text += " ***" + text + "***";
    }

    virtual void addParagraph(const string && text) {
        _text += "\n\n" + text + "\n\n";
    }

    virtual void addHeader(const string && text) {
        _text += "\n\n# " + text + "\n\n";
    }

    virtual void addImage(const string &&path, const string &&description) {
        _text += "\n\n![" + description + "](" + path + ")";
    }

    virtual void addLink(const string &&link, const string &&text) {
        _text += "\n\n[" + text + "](" + link + ")";
    }

    virtual void addOrderedList(const vector<string> &&list) {
        _text += "\n\n";
        for (auto& s : list) {
            _text += "\n1. " + s;
        }
        _text += "\n\n";
    }

    virtual void addMarkedList(const vector<string> &&list) {
        _text += "\n\n";
        for (auto& s : list) {
            _text += "\n- " + s;
        }
        _text += "\n\n";
    }

    virtual string getResult() const {
        return _text;
    };
};