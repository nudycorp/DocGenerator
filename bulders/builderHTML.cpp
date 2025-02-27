#pragma once
#include "../builder.h"

class BuilderHTML: public Builder {
string _text;

public:
    BuilderHTML() : _text("") {}

    virtual void addText(const string && text) {
        _text += text;
    };

    virtual void addBoldText(const string && text) {
        _text += "<b>" + text + "</b>";
    }

    virtual void addItalicText(const string && text) {
        _text += "<i>" + text + "</i>";
    }

    virtual void addBoldItalicText(const string && text) {
        _text += "<b><i>" + text + "</i></b>";
    }

    virtual void addParagraph(const string && text) {
        _text += "<p>" + text + "</p>\n";
    }

    virtual void addHeader(const string && text) {
        _text += "<h1>" + text + "</h1>\n";
    }

    virtual void addImage(const string &&path, const string &&description) {
        _text += "<img src=\"" + path + "\" alt=\"" + description + "\">";
    }

    virtual void addLink(const string &&link, const string &&text) {
        _text += "<a href=\"" + link + "\">" + text + "</a>";
    }

    virtual void addOrderedList(const vector<string> &&list) {
        _text += "<ol>\n";
        for (auto& s : list) {
            _text += "  <li>" + s + "</li>\n";
        }
        _text += "</ol>\n";
    }

    virtual void addMarkedList(const vector<string> &&list) {
        _text += "<ul>\n";
        for (auto& s : list) {
            _text += "  <li>" + s + "</li>\n";
        }
        _text += "</ul>\n\n";
    }

    virtual string getResult() const {
        return R"(<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Title</title>
</head>
<body>
)" + _text + R"(
</body>)";
    };
};