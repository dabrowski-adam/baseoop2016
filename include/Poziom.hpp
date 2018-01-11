#ifndef POZIOM_HPP
#define POZIOM_HPP

class Poziom {
  private:
		char sciana;
	public:
		Poziom(char sciana);
    ~Poziom();
		virtual void wyswietl() = 0; // Abstract method
};

#endif // POZIOM_HPP
