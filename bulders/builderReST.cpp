#pragma once
#include "../builder.h"

class builderReST : public Builder {
	private:
		string _text;
	
	public:
		builderReST() : _text("") {}

		virtual void addText(const string&& text) { _text += text; }

		virtual void addBoldText(const string&& text) { _text += " **" + text + "**"; }

		virtual void addItalicText(const string&& text) { _text += " *" + text + "*"; }

		virtual void addBoldItalicText(const string&& text) { _text += " ***" + text + "***"; }

		virtual void addParagraph(const string&& text) { _text += "\n\n" + text + "\n\n"; }

		virtual void addHeader(const string&& text) { _text += "\n\n" + text + "\n" + string(text.size(), '=') + "\n\n"; }

		virtual void addImage(const string&& path, const string&& description) { _text += "\n.. image:: " + path + "\n : alt: " + description + "\n"; }

		virtual void addLink(const string&& link, const string&& text) { _text += "\n`" + text + "`_ <" + link + ">"; }

		virtual void addOrderedList(const vector<string>&& list) {
			_text += "\n";
			int index = 1;
			for (string& s : list) {
				_text += to_string(index++) + ". " + s + "\n";
			}
			_text += "\n";
		}

		virtual void addMarkedList(const vector<string>&& list) {
			_text += "\n";
			for (string& s : list) _text += "* " + s + "\n";
			_text += "\n";
		}

		virtual string getResult() const { return _text; }
};