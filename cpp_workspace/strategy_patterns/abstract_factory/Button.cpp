#include <iostream>

class Button {
    public:
        virtual void paint() = 0;
        virtual ~Button() {}
};

class WinButton: public Button {
    public:
        void paint() {

        }
};
