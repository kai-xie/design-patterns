#ifndef DP_SINGLETON_SINGLETON_H_
#define DP_SINGLETON_SINGLETON_H_

class Singleton {
 public:
  static Singleton* GetInstance() {
    if (instance_ == nullptr) {
      instance_ = new Singleton();
    }
    return instance_;
  }

  int value() const { return value_; }
  int& mutable_value() { return value_; }
  void set_value(const int& val) { value_ = val; }

 private:
  Singleton(int value = 0) : value_(value) {}
  static Singleton* instance_;

  int value_;
};

Singleton* Singleton::instance_ = nullptr;

#endif  //   DP_SINGLETON_SINGLETON_H_
