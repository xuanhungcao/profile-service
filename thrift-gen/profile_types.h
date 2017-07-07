/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef profile_TYPES_H
#define profile_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>

#include <boost/serialization/access.hpp>


namespace profile {

class UserProfile;

typedef struct _UserProfile__isset {
  _UserProfile__isset() : id(false), name(false), age(false) {}
  bool id :1;
  bool name :1;
  bool age :1;
} _UserProfile__isset;

class UserProfile : public virtual ::apache::thrift::TBase {
 public:

  UserProfile(const UserProfile&);
  UserProfile& operator=(const UserProfile&);
  UserProfile() : id(0), name(), age(0) {
  }

  virtual ~UserProfile() throw();
  int32_t id;
  std::string name;
  int16_t age;

  _UserProfile__isset __isset;

  void __set_id(const int32_t val);

  void __set_name(const std::string& val);

  void __set_age(const int16_t val);

  bool operator == (const UserProfile & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(name == rhs.name))
      return false;
    if (!(age == rhs.age))
      return false;
    return true;
  }
  bool operator != (const UserProfile &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserProfile & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  
private:
	friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version) {
		ar & id;
		ar & name;
		ar & age;
	}
};

void swap(UserProfile &a, UserProfile &b);

inline std::ostream& operator<<(std::ostream& out, const UserProfile& obj)
{
  obj.printTo(out);
  return out;
}

} // namespace

#endif
