#include <exception>
#pragma once
class Empty : public std::exception {
public:
  Empty () noexcept {}
  Empty (const Empty&) noexcept = default;
  Empty& operator= (const Empty&) noexcept = default;
  virtual ~Empty() noexcept = default;
  virtual const char* what() const noexcept {
    return "\n Empty error raised: You are trying to erase from an empty list \n";
  }
};
