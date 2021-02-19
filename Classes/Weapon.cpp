#include <cstdio>
#include <iostream>
#include <locale>

class Weapons {
public:
  virtual void Print() { std::cout << "Base Class-> Weapon " << std::endl; }
  virtual int GetDamage() { return 0; }
};
class Explosive : public Weapons {

  void Print() {
    std::cout << "You Are Now in Explosive->Class: " << std::endl;
  }
};
class RPG : public Explosive {
private:
  int damage_;

public:
  RPG(int damage) : damage_(damage) {}
  int GetDamage() { return damage_; }
  void Print() {
    std::cout << "The RPG Weapon Damage IS:  " << GetDamage() << std::endl;
  }
};
class Bazooka : public Explosive {
private:
  int damage_;

public:
  Bazooka(int damage) : damage_(damage) {}
  int GetDamage() { return damage_; }
  void Print() {
    std::cout << "The Bazooka Weapon Damage IS:  " << GetDamage() << std::endl;
  }
};
class Bullets : public Weapons {
  void Print() { std::cout << "You Are Now in Bullets->Class: " << std::endl; }
};
class Automatic : public Bullets {
  void Print() {
    std::cout << "You Are Now in Automatic->Class: " << std::endl;
  }
};
class Rifels : public Automatic {
  void Print() { std::cout << "You Are Now in Rifles->Class: " << std::endl; }
};
class MP4 : public Rifels {
private:
  int damage_;

public:
  MP4(int damage) : damage_(damage) {}
  int GetDamage() { return damage_; }
  void Print() {
    std::cout << "The MP4 Weapon Damage IS:  " << GetDamage() << std::endl;
  }
};
class AK47 : public Rifels {
private:
  int damage_;

public:
  AK47(int damage) : damage_(damage) {}
  int GetDamage() { return damage_; }
  void Print() {
    std::cout << "The AK47 Weapon Damage IS:  " << GetDamage() << std::endl;
  }
};
class Guns : public Automatic {
  void Print() { std::cout << "You Are Now in Guns->Class: " << std::endl; }
};
class Uzi : public Guns {
private:
  int damage_;

public:
  Uzi(int damage) : damage_(damage) {}
  int GetDamage() { return damage_; }
  void Print() {
    std::cout << "The UZI Weapon Damage IS:  " << GetDamage() << std::endl;
  }
};
class MAC11 : public Guns {
private:
  int damage_;

public:
  MAC11(int damage) : damage_(damage) {}
  int GetDamage() { return damage_; }
  void Print() {
    std::cout << "The MAC11 Weapon Damage IS:  " << GetDamage() << std::endl;
  }
};
class SemiAuto : public Bullets {
  void Print() { std::cout << "You Are Now in SemiAuto->Class: " << std::endl; }
};
class SA_Rifels : public SemiAuto {
  void Print() {
    std::cout << "You Are Now in SA_Rifels->Class: " << std::endl;
  }
};
class AR15 : public SA_Rifels {
private:
  int damage_;

public:
  AR15(int damage) : damage_(damage) {}
  int GetDamage() { return damage_; }
  void Print() {
    std::cout << "The AR15 Weapon Damage IS:  " << GetDamage() << std::endl;
  }
};
class BerettaBM59 : public SA_Rifels {
private:
  int damage_;

public:
  BerettaBM59(int damage) : damage_(damage) {}
  int GetDamage() { return damage_; }
  void Print() {
    std::cout << "The BerettaBM59 Weapon Damage IS:  " << GetDamage()
              << std::endl;
  }
};
class SA_Guns : public SemiAuto {
  void Print() { std::cout << "You Are Now in SA_Guns->Class: " << std::endl; }
};
class G1911 : public SA_Guns {
private:
  int damage_;

public:
  G1911(int damage) : damage_(damage) {}
  int GetDamage() { return damage_; }
  void Print() {
    std::cout << "The G1911 Weapon Damage IS:  " << GetDamage() << std::endl;
  }
};
class SpringFieldXD : public SA_Guns {
private:
  int damage_;

public:
  SpringFieldXD(int damage) : damage_(damage) {}
  int GetDamage() { return damage_; }
  void Print() {
    std::cout << "The SpringFieldXD Weapon Damage IS:  " << GetDamage()
              << std::endl;
  }
};
class Blades : public Weapons {
  void Print() { std::cout << "You Are Now in Blades->Class: " << std::endl; }
};
class Knife : public Blades {
private:
  int damage_;

public:
  Knife(int damage) : damage_(damage) {}
  int GetDamage() { return damage_; }
  void Print() {
    std::cout << "The knife Weapon Damage IS:  " << GetDamage() << std::endl;
  }
};
class Sword : public Blades {
private:
  int damage_;

public:
  Sword(int damage) : damage_(damage) {}
  int GetDamage() { return damage_; }
  void Print() {
    std::cout << "The sword Weapon Damage IS:  " << GetDamage() << std::endl;
  }
};
void PrintSha(Weapons *shape) { shape->Print(); }

int main() {
  RPG r(80);
  Bazooka b(85);
  MP4 m(60);
  AK47 k(56);
  Uzi u(60);
  MAC11 c(52);
  AR15 a(50);
  BerettaBM59 t(45);
  G1911 g(40);
  SpringFieldXD p(35);
  Knife n(30);
  Sword s(20);

  PrintSha(&r);
  PrintSha(&b);
  PrintSha(&m);
  PrintSha(&k);
  PrintSha(&u);
  PrintSha(&c);
  PrintSha(&a);
  PrintSha(&t);
  PrintSha(&g);
  PrintSha(&p);
  PrintSha(&n);
  PrintSha(&s);
}
