#pragma once

#include<string>
#include<vector>

using namespace std;

class Builder {
public:

virtual void addText(const string&&) = 0;
virtual void addBoldText(const string&&) = 0;
virtual void addItalicText(const string&&) = 0;
virtual void addBoldItalicText(const string&&) = 0;
virtual void addParagraph(const string&&) = 0;
virtual void addHeader(const string&&) = 0;
virtual void addImage(const string&& path, const string&& description) = 0;
virtual void addLink(const string&& link, const string&& text) = 0;
virtual void addOrderedList(const vector<string>&& list) = 0;
virtual void addMarkedList(const vector<string>&& list) = 0;

virtual string getResult() const = 0;
};
