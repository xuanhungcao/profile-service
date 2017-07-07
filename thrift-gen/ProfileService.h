/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef ProfileService_H
#define ProfileService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "profile_types.h"

namespace profile {

#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class ProfileServiceIf {
 public:
  virtual ~ProfileServiceIf() {}
  virtual void put(const int32_t id, const UserProfile& profile) = 0;
  virtual void get(UserProfile& _return, const int32_t id) = 0;
  virtual void remove(const int32_t id) = 0;
};

class ProfileServiceIfFactory {
 public:
  typedef ProfileServiceIf Handler;

  virtual ~ProfileServiceIfFactory() {}

  virtual ProfileServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(ProfileServiceIf* /* handler */) = 0;
};

class ProfileServiceIfSingletonFactory : virtual public ProfileServiceIfFactory {
 public:
  ProfileServiceIfSingletonFactory(const boost::shared_ptr<ProfileServiceIf>& iface) : iface_(iface) {}
  virtual ~ProfileServiceIfSingletonFactory() {}

  virtual ProfileServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(ProfileServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<ProfileServiceIf> iface_;
};

class ProfileServiceNull : virtual public ProfileServiceIf {
 public:
  virtual ~ProfileServiceNull() {}
  void put(const int32_t /* id */, const UserProfile& /* profile */) {
    return;
  }
  void get(UserProfile& /* _return */, const int32_t /* id */) {
    return;
  }
  void remove(const int32_t /* id */) {
    return;
  }
};

typedef struct _ProfileService_put_args__isset {
  _ProfileService_put_args__isset() : id(false), profile(false) {}
  bool id :1;
  bool profile :1;
} _ProfileService_put_args__isset;

class ProfileService_put_args {
 public:

  ProfileService_put_args(const ProfileService_put_args&);
  ProfileService_put_args& operator=(const ProfileService_put_args&);
  ProfileService_put_args() : id(0) {
  }

  virtual ~ProfileService_put_args() throw();
  int32_t id;
  UserProfile profile;

  _ProfileService_put_args__isset __isset;

  void __set_id(const int32_t val);

  void __set_profile(const UserProfile& val);

  bool operator == (const ProfileService_put_args & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(profile == rhs.profile))
      return false;
    return true;
  }
  bool operator != (const ProfileService_put_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ProfileService_put_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ProfileService_put_pargs {
 public:


  virtual ~ProfileService_put_pargs() throw();
  const int32_t* id;
  const UserProfile* profile;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ProfileService_put_result {
 public:

  ProfileService_put_result(const ProfileService_put_result&);
  ProfileService_put_result& operator=(const ProfileService_put_result&);
  ProfileService_put_result() {
  }

  virtual ~ProfileService_put_result() throw();

  bool operator == (const ProfileService_put_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const ProfileService_put_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ProfileService_put_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ProfileService_put_presult {
 public:


  virtual ~ProfileService_put_presult() throw();

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _ProfileService_get_args__isset {
  _ProfileService_get_args__isset() : id(false) {}
  bool id :1;
} _ProfileService_get_args__isset;

class ProfileService_get_args {
 public:

  ProfileService_get_args(const ProfileService_get_args&);
  ProfileService_get_args& operator=(const ProfileService_get_args&);
  ProfileService_get_args() : id(0) {
  }

  virtual ~ProfileService_get_args() throw();
  int32_t id;

  _ProfileService_get_args__isset __isset;

  void __set_id(const int32_t val);

  bool operator == (const ProfileService_get_args & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    return true;
  }
  bool operator != (const ProfileService_get_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ProfileService_get_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ProfileService_get_pargs {
 public:


  virtual ~ProfileService_get_pargs() throw();
  const int32_t* id;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ProfileService_get_result__isset {
  _ProfileService_get_result__isset() : success(false) {}
  bool success :1;
} _ProfileService_get_result__isset;

class ProfileService_get_result {
 public:

  ProfileService_get_result(const ProfileService_get_result&);
  ProfileService_get_result& operator=(const ProfileService_get_result&);
  ProfileService_get_result() {
  }

  virtual ~ProfileService_get_result() throw();
  UserProfile success;

  _ProfileService_get_result__isset __isset;

  void __set_success(const UserProfile& val);

  bool operator == (const ProfileService_get_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const ProfileService_get_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ProfileService_get_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ProfileService_get_presult__isset {
  _ProfileService_get_presult__isset() : success(false) {}
  bool success :1;
} _ProfileService_get_presult__isset;

class ProfileService_get_presult {
 public:


  virtual ~ProfileService_get_presult() throw();
  UserProfile* success;

  _ProfileService_get_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _ProfileService_remove_args__isset {
  _ProfileService_remove_args__isset() : id(false) {}
  bool id :1;
} _ProfileService_remove_args__isset;

class ProfileService_remove_args {
 public:

  ProfileService_remove_args(const ProfileService_remove_args&);
  ProfileService_remove_args& operator=(const ProfileService_remove_args&);
  ProfileService_remove_args() : id(0) {
  }

  virtual ~ProfileService_remove_args() throw();
  int32_t id;

  _ProfileService_remove_args__isset __isset;

  void __set_id(const int32_t val);

  bool operator == (const ProfileService_remove_args & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    return true;
  }
  bool operator != (const ProfileService_remove_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ProfileService_remove_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ProfileService_remove_pargs {
 public:


  virtual ~ProfileService_remove_pargs() throw();
  const int32_t* id;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ProfileService_remove_result {
 public:

  ProfileService_remove_result(const ProfileService_remove_result&);
  ProfileService_remove_result& operator=(const ProfileService_remove_result&);
  ProfileService_remove_result() {
  }

  virtual ~ProfileService_remove_result() throw();

  bool operator == (const ProfileService_remove_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const ProfileService_remove_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ProfileService_remove_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ProfileService_remove_presult {
 public:


  virtual ~ProfileService_remove_presult() throw();

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class ProfileServiceClient : virtual public ProfileServiceIf {
 public:
  ProfileServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ProfileServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void put(const int32_t id, const UserProfile& profile);
  void send_put(const int32_t id, const UserProfile& profile);
  void recv_put();
  void get(UserProfile& _return, const int32_t id);
  void send_get(const int32_t id);
  void recv_get(UserProfile& _return);
  void remove(const int32_t id);
  void send_remove(const int32_t id);
  void recv_remove();
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class ProfileServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<ProfileServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (ProfileServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_put(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_get(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_remove(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  ProfileServiceProcessor(boost::shared_ptr<ProfileServiceIf> iface) :
    iface_(iface) {
    processMap_["put"] = &ProfileServiceProcessor::process_put;
    processMap_["get"] = &ProfileServiceProcessor::process_get;
    processMap_["remove"] = &ProfileServiceProcessor::process_remove;
  }

  virtual ~ProfileServiceProcessor() {}
};

class ProfileServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  ProfileServiceProcessorFactory(const ::boost::shared_ptr< ProfileServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< ProfileServiceIfFactory > handlerFactory_;
};

class ProfileServiceMultiface : virtual public ProfileServiceIf {
 public:
  ProfileServiceMultiface(std::vector<boost::shared_ptr<ProfileServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~ProfileServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<ProfileServiceIf> > ifaces_;
  ProfileServiceMultiface() {}
  void add(boost::shared_ptr<ProfileServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void put(const int32_t id, const UserProfile& profile) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->put(id, profile);
    }
    ifaces_[i]->put(id, profile);
  }

  void get(UserProfile& _return, const int32_t id) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->get(_return, id);
    }
    ifaces_[i]->get(_return, id);
    return;
  }

  void remove(const int32_t id) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->remove(id);
    }
    ifaces_[i]->remove(id);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class ProfileServiceConcurrentClient : virtual public ProfileServiceIf {
 public:
  ProfileServiceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ProfileServiceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void put(const int32_t id, const UserProfile& profile);
  int32_t send_put(const int32_t id, const UserProfile& profile);
  void recv_put(const int32_t seqid);
  void get(UserProfile& _return, const int32_t id);
  int32_t send_get(const int32_t id);
  void recv_get(UserProfile& _return, const int32_t seqid);
  void remove(const int32_t id);
  int32_t send_remove(const int32_t id);
  void recv_remove(const int32_t seqid);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _WIN32
  #pragma warning( pop )
#endif

} // namespace

#endif
