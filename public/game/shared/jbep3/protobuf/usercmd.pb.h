// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: usercmd.proto

#ifndef PROTOBUF_usercmd_2eproto__INCLUDED
#define PROTOBUF_usercmd_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "networkbasetypes.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_usercmd_2eproto();
void protobuf_AssignDesc_usercmd_2eproto();
void protobuf_ShutdownFile_usercmd_2eproto();

class CBaseUserCmdPB;
class CUserCmdPB;

// ===================================================================

class CBaseUserCmdPB : public ::google::protobuf::Message {
 public:
  CBaseUserCmdPB();
  virtual ~CBaseUserCmdPB();

  CBaseUserCmdPB(const CBaseUserCmdPB& from);

  inline CBaseUserCmdPB& operator=(const CBaseUserCmdPB& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CBaseUserCmdPB& default_instance();

  void Swap(CBaseUserCmdPB* other);

  // implements Message ----------------------------------------------

  CBaseUserCmdPB* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CBaseUserCmdPB& from);
  void MergeFrom(const CBaseUserCmdPB& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 command_number = 1;
  inline bool has_command_number() const;
  inline void clear_command_number();
  static const int kCommandNumberFieldNumber = 1;
  inline ::google::protobuf::int32 command_number() const;
  inline void set_command_number(::google::protobuf::int32 value);

  // optional int32 tick_count = 2;
  inline bool has_tick_count() const;
  inline void clear_tick_count();
  static const int kTickCountFieldNumber = 2;
  inline ::google::protobuf::int32 tick_count() const;
  inline void set_tick_count(::google::protobuf::int32 value);

  // optional .CMsgQAngle viewangles = 3;
  inline bool has_viewangles() const;
  inline void clear_viewangles();
  static const int kViewanglesFieldNumber = 3;
  inline const ::CMsgQAngle& viewangles() const;
  inline ::CMsgQAngle* mutable_viewangles();
  inline ::CMsgQAngle* release_viewangles();
  inline void set_allocated_viewangles(::CMsgQAngle* viewangles);

  // optional .CMsgVector aimdirection = 4;
  inline bool has_aimdirection() const;
  inline void clear_aimdirection();
  static const int kAimdirectionFieldNumber = 4;
  inline const ::CMsgVector& aimdirection() const;
  inline ::CMsgVector* mutable_aimdirection();
  inline ::CMsgVector* release_aimdirection();
  inline void set_allocated_aimdirection(::CMsgVector* aimdirection);

  // optional float forwardmove = 5;
  inline bool has_forwardmove() const;
  inline void clear_forwardmove();
  static const int kForwardmoveFieldNumber = 5;
  inline float forwardmove() const;
  inline void set_forwardmove(float value);

  // optional float leftmove = 6;
  inline bool has_leftmove() const;
  inline void clear_leftmove();
  static const int kLeftmoveFieldNumber = 6;
  inline float leftmove() const;
  inline void set_leftmove(float value);

  // optional float sidemove = 7;
  inline bool has_sidemove() const;
  inline void clear_sidemove();
  static const int kSidemoveFieldNumber = 7;
  inline float sidemove() const;
  inline void set_sidemove(float value);

  // optional float upmove = 8;
  inline bool has_upmove() const;
  inline void clear_upmove();
  static const int kUpmoveFieldNumber = 8;
  inline float upmove() const;
  inline void set_upmove(float value);

  // optional int32 buttons = 9;
  inline bool has_buttons() const;
  inline void clear_buttons();
  static const int kButtonsFieldNumber = 9;
  inline ::google::protobuf::int32 buttons() const;
  inline void set_buttons(::google::protobuf::int32 value);

  // optional int32 impulse = 10;
  inline bool has_impulse() const;
  inline void clear_impulse();
  static const int kImpulseFieldNumber = 10;
  inline ::google::protobuf::int32 impulse() const;
  inline void set_impulse(::google::protobuf::int32 value);

  // optional int32 weaponselect = 11;
  inline bool has_weaponselect() const;
  inline void clear_weaponselect();
  static const int kWeaponselectFieldNumber = 11;
  inline ::google::protobuf::int32 weaponselect() const;
  inline void set_weaponselect(::google::protobuf::int32 value);

  // optional int32 weaponsubtype = 12;
  inline bool has_weaponsubtype() const;
  inline void clear_weaponsubtype();
  static const int kWeaponsubtypeFieldNumber = 12;
  inline ::google::protobuf::int32 weaponsubtype() const;
  inline void set_weaponsubtype(::google::protobuf::int32 value);

  // optional int32 random_seed = 13;
  inline bool has_random_seed() const;
  inline void clear_random_seed();
  static const int kRandomSeedFieldNumber = 13;
  inline ::google::protobuf::int32 random_seed() const;
  inline void set_random_seed(::google::protobuf::int32 value);

  // optional int32 mousedx = 14;
  inline bool has_mousedx() const;
  inline void clear_mousedx();
  static const int kMousedxFieldNumber = 14;
  inline ::google::protobuf::int32 mousedx() const;
  inline void set_mousedx(::google::protobuf::int32 value);

  // optional int32 mousedy = 15;
  inline bool has_mousedy() const;
  inline void clear_mousedy();
  static const int kMousedyFieldNumber = 15;
  inline ::google::protobuf::int32 mousedy() const;
  inline void set_mousedy(::google::protobuf::int32 value);

  // optional bool hasbeenpredicted = 16;
  inline bool has_hasbeenpredicted() const;
  inline void clear_hasbeenpredicted();
  static const int kHasbeenpredictedFieldNumber = 16;
  inline bool hasbeenpredicted() const;
  inline void set_hasbeenpredicted(bool value);

  // @@protoc_insertion_point(class_scope:CBaseUserCmdPB)
 private:
  inline void set_has_command_number();
  inline void clear_has_command_number();
  inline void set_has_tick_count();
  inline void clear_has_tick_count();
  inline void set_has_viewangles();
  inline void clear_has_viewangles();
  inline void set_has_aimdirection();
  inline void clear_has_aimdirection();
  inline void set_has_forwardmove();
  inline void clear_has_forwardmove();
  inline void set_has_leftmove();
  inline void clear_has_leftmove();
  inline void set_has_sidemove();
  inline void clear_has_sidemove();
  inline void set_has_upmove();
  inline void clear_has_upmove();
  inline void set_has_buttons();
  inline void clear_has_buttons();
  inline void set_has_impulse();
  inline void clear_has_impulse();
  inline void set_has_weaponselect();
  inline void clear_has_weaponselect();
  inline void set_has_weaponsubtype();
  inline void clear_has_weaponsubtype();
  inline void set_has_random_seed();
  inline void clear_has_random_seed();
  inline void set_has_mousedx();
  inline void clear_has_mousedx();
  inline void set_has_mousedy();
  inline void clear_has_mousedy();
  inline void set_has_hasbeenpredicted();
  inline void clear_has_hasbeenpredicted();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 command_number_;
  ::google::protobuf::int32 tick_count_;
  ::CMsgQAngle* viewangles_;
  ::CMsgVector* aimdirection_;
  float forwardmove_;
  float leftmove_;
  float sidemove_;
  float upmove_;
  ::google::protobuf::int32 buttons_;
  ::google::protobuf::int32 impulse_;
  ::google::protobuf::int32 weaponselect_;
  ::google::protobuf::int32 weaponsubtype_;
  ::google::protobuf::int32 random_seed_;
  ::google::protobuf::int32 mousedx_;
  ::google::protobuf::int32 mousedy_;
  bool hasbeenpredicted_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(16 + 31) / 32];

  friend void  protobuf_AddDesc_usercmd_2eproto();
  friend void protobuf_AssignDesc_usercmd_2eproto();
  friend void protobuf_ShutdownFile_usercmd_2eproto();

  void InitAsDefaultInstance();
  static CBaseUserCmdPB* default_instance_;
};
// -------------------------------------------------------------------

class CUserCmdPB : public ::google::protobuf::Message {
 public:
  CUserCmdPB();
  virtual ~CUserCmdPB();

  CUserCmdPB(const CUserCmdPB& from);

  inline CUserCmdPB& operator=(const CUserCmdPB& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CUserCmdPB& default_instance();

  void Swap(CUserCmdPB* other);

  // implements Message ----------------------------------------------

  CUserCmdPB* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CUserCmdPB& from);
  void MergeFrom(const CUserCmdPB& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .CBaseUserCmdPB base = 1;
  inline bool has_base() const;
  inline void clear_base();
  static const int kBaseFieldNumber = 1;
  inline const ::CBaseUserCmdPB& base() const;
  inline ::CBaseUserCmdPB* mutable_base();
  inline ::CBaseUserCmdPB* release_base();
  inline void set_allocated_base(::CBaseUserCmdPB* base);

  // @@protoc_insertion_point(class_scope:CUserCmdPB)
 private:
  inline void set_has_base();
  inline void clear_has_base();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::CBaseUserCmdPB* base_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_usercmd_2eproto();
  friend void protobuf_AssignDesc_usercmd_2eproto();
  friend void protobuf_ShutdownFile_usercmd_2eproto();

  void InitAsDefaultInstance();
  static CUserCmdPB* default_instance_;
};
// ===================================================================


// ===================================================================

// CBaseUserCmdPB

// optional int32 command_number = 1;
inline bool CBaseUserCmdPB::has_command_number() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CBaseUserCmdPB::set_has_command_number() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CBaseUserCmdPB::clear_has_command_number() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CBaseUserCmdPB::clear_command_number() {
  command_number_ = 0;
  clear_has_command_number();
}
inline ::google::protobuf::int32 CBaseUserCmdPB::command_number() const {
  return command_number_;
}
inline void CBaseUserCmdPB::set_command_number(::google::protobuf::int32 value) {
  set_has_command_number();
  command_number_ = value;
}

// optional int32 tick_count = 2;
inline bool CBaseUserCmdPB::has_tick_count() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CBaseUserCmdPB::set_has_tick_count() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CBaseUserCmdPB::clear_has_tick_count() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CBaseUserCmdPB::clear_tick_count() {
  tick_count_ = 0;
  clear_has_tick_count();
}
inline ::google::protobuf::int32 CBaseUserCmdPB::tick_count() const {
  return tick_count_;
}
inline void CBaseUserCmdPB::set_tick_count(::google::protobuf::int32 value) {
  set_has_tick_count();
  tick_count_ = value;
}

// optional .CMsgQAngle viewangles = 3;
inline bool CBaseUserCmdPB::has_viewangles() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CBaseUserCmdPB::set_has_viewangles() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CBaseUserCmdPB::clear_has_viewangles() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CBaseUserCmdPB::clear_viewangles() {
  if (viewangles_ != NULL) viewangles_->::CMsgQAngle::Clear();
  clear_has_viewangles();
}
inline const ::CMsgQAngle& CBaseUserCmdPB::viewangles() const {
  return viewangles_ != NULL ? *viewangles_ : *default_instance_->viewangles_;
}
inline ::CMsgQAngle* CBaseUserCmdPB::mutable_viewangles() {
  set_has_viewangles();
  if (viewangles_ == NULL) viewangles_ = new ::CMsgQAngle;
  return viewangles_;
}
inline ::CMsgQAngle* CBaseUserCmdPB::release_viewangles() {
  clear_has_viewangles();
  ::CMsgQAngle* temp = viewangles_;
  viewangles_ = NULL;
  return temp;
}
inline void CBaseUserCmdPB::set_allocated_viewangles(::CMsgQAngle* viewangles) {
  delete viewangles_;
  viewangles_ = viewangles;
  if (viewangles) {
    set_has_viewangles();
  } else {
    clear_has_viewangles();
  }
}

// optional .CMsgVector aimdirection = 4;
inline bool CBaseUserCmdPB::has_aimdirection() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CBaseUserCmdPB::set_has_aimdirection() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CBaseUserCmdPB::clear_has_aimdirection() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CBaseUserCmdPB::clear_aimdirection() {
  if (aimdirection_ != NULL) aimdirection_->::CMsgVector::Clear();
  clear_has_aimdirection();
}
inline const ::CMsgVector& CBaseUserCmdPB::aimdirection() const {
  return aimdirection_ != NULL ? *aimdirection_ : *default_instance_->aimdirection_;
}
inline ::CMsgVector* CBaseUserCmdPB::mutable_aimdirection() {
  set_has_aimdirection();
  if (aimdirection_ == NULL) aimdirection_ = new ::CMsgVector;
  return aimdirection_;
}
inline ::CMsgVector* CBaseUserCmdPB::release_aimdirection() {
  clear_has_aimdirection();
  ::CMsgVector* temp = aimdirection_;
  aimdirection_ = NULL;
  return temp;
}
inline void CBaseUserCmdPB::set_allocated_aimdirection(::CMsgVector* aimdirection) {
  delete aimdirection_;
  aimdirection_ = aimdirection;
  if (aimdirection) {
    set_has_aimdirection();
  } else {
    clear_has_aimdirection();
  }
}

// optional float forwardmove = 5;
inline bool CBaseUserCmdPB::has_forwardmove() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CBaseUserCmdPB::set_has_forwardmove() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CBaseUserCmdPB::clear_has_forwardmove() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CBaseUserCmdPB::clear_forwardmove() {
  forwardmove_ = 0;
  clear_has_forwardmove();
}
inline float CBaseUserCmdPB::forwardmove() const {
  return forwardmove_;
}
inline void CBaseUserCmdPB::set_forwardmove(float value) {
  set_has_forwardmove();
  forwardmove_ = value;
}

// optional float leftmove = 6;
inline bool CBaseUserCmdPB::has_leftmove() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void CBaseUserCmdPB::set_has_leftmove() {
  _has_bits_[0] |= 0x00000020u;
}
inline void CBaseUserCmdPB::clear_has_leftmove() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void CBaseUserCmdPB::clear_leftmove() {
  leftmove_ = 0;
  clear_has_leftmove();
}
inline float CBaseUserCmdPB::leftmove() const {
  return leftmove_;
}
inline void CBaseUserCmdPB::set_leftmove(float value) {
  set_has_leftmove();
  leftmove_ = value;
}

// optional float sidemove = 7;
inline bool CBaseUserCmdPB::has_sidemove() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void CBaseUserCmdPB::set_has_sidemove() {
  _has_bits_[0] |= 0x00000040u;
}
inline void CBaseUserCmdPB::clear_has_sidemove() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void CBaseUserCmdPB::clear_sidemove() {
  sidemove_ = 0;
  clear_has_sidemove();
}
inline float CBaseUserCmdPB::sidemove() const {
  return sidemove_;
}
inline void CBaseUserCmdPB::set_sidemove(float value) {
  set_has_sidemove();
  sidemove_ = value;
}

// optional float upmove = 8;
inline bool CBaseUserCmdPB::has_upmove() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void CBaseUserCmdPB::set_has_upmove() {
  _has_bits_[0] |= 0x00000080u;
}
inline void CBaseUserCmdPB::clear_has_upmove() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void CBaseUserCmdPB::clear_upmove() {
  upmove_ = 0;
  clear_has_upmove();
}
inline float CBaseUserCmdPB::upmove() const {
  return upmove_;
}
inline void CBaseUserCmdPB::set_upmove(float value) {
  set_has_upmove();
  upmove_ = value;
}

// optional int32 buttons = 9;
inline bool CBaseUserCmdPB::has_buttons() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void CBaseUserCmdPB::set_has_buttons() {
  _has_bits_[0] |= 0x00000100u;
}
inline void CBaseUserCmdPB::clear_has_buttons() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void CBaseUserCmdPB::clear_buttons() {
  buttons_ = 0;
  clear_has_buttons();
}
inline ::google::protobuf::int32 CBaseUserCmdPB::buttons() const {
  return buttons_;
}
inline void CBaseUserCmdPB::set_buttons(::google::protobuf::int32 value) {
  set_has_buttons();
  buttons_ = value;
}

// optional int32 impulse = 10;
inline bool CBaseUserCmdPB::has_impulse() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void CBaseUserCmdPB::set_has_impulse() {
  _has_bits_[0] |= 0x00000200u;
}
inline void CBaseUserCmdPB::clear_has_impulse() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void CBaseUserCmdPB::clear_impulse() {
  impulse_ = 0;
  clear_has_impulse();
}
inline ::google::protobuf::int32 CBaseUserCmdPB::impulse() const {
  return impulse_;
}
inline void CBaseUserCmdPB::set_impulse(::google::protobuf::int32 value) {
  set_has_impulse();
  impulse_ = value;
}

// optional int32 weaponselect = 11;
inline bool CBaseUserCmdPB::has_weaponselect() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void CBaseUserCmdPB::set_has_weaponselect() {
  _has_bits_[0] |= 0x00000400u;
}
inline void CBaseUserCmdPB::clear_has_weaponselect() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void CBaseUserCmdPB::clear_weaponselect() {
  weaponselect_ = 0;
  clear_has_weaponselect();
}
inline ::google::protobuf::int32 CBaseUserCmdPB::weaponselect() const {
  return weaponselect_;
}
inline void CBaseUserCmdPB::set_weaponselect(::google::protobuf::int32 value) {
  set_has_weaponselect();
  weaponselect_ = value;
}

// optional int32 weaponsubtype = 12;
inline bool CBaseUserCmdPB::has_weaponsubtype() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void CBaseUserCmdPB::set_has_weaponsubtype() {
  _has_bits_[0] |= 0x00000800u;
}
inline void CBaseUserCmdPB::clear_has_weaponsubtype() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void CBaseUserCmdPB::clear_weaponsubtype() {
  weaponsubtype_ = 0;
  clear_has_weaponsubtype();
}
inline ::google::protobuf::int32 CBaseUserCmdPB::weaponsubtype() const {
  return weaponsubtype_;
}
inline void CBaseUserCmdPB::set_weaponsubtype(::google::protobuf::int32 value) {
  set_has_weaponsubtype();
  weaponsubtype_ = value;
}

// optional int32 random_seed = 13;
inline bool CBaseUserCmdPB::has_random_seed() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void CBaseUserCmdPB::set_has_random_seed() {
  _has_bits_[0] |= 0x00001000u;
}
inline void CBaseUserCmdPB::clear_has_random_seed() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void CBaseUserCmdPB::clear_random_seed() {
  random_seed_ = 0;
  clear_has_random_seed();
}
inline ::google::protobuf::int32 CBaseUserCmdPB::random_seed() const {
  return random_seed_;
}
inline void CBaseUserCmdPB::set_random_seed(::google::protobuf::int32 value) {
  set_has_random_seed();
  random_seed_ = value;
}

// optional int32 mousedx = 14;
inline bool CBaseUserCmdPB::has_mousedx() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void CBaseUserCmdPB::set_has_mousedx() {
  _has_bits_[0] |= 0x00002000u;
}
inline void CBaseUserCmdPB::clear_has_mousedx() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void CBaseUserCmdPB::clear_mousedx() {
  mousedx_ = 0;
  clear_has_mousedx();
}
inline ::google::protobuf::int32 CBaseUserCmdPB::mousedx() const {
  return mousedx_;
}
inline void CBaseUserCmdPB::set_mousedx(::google::protobuf::int32 value) {
  set_has_mousedx();
  mousedx_ = value;
}

// optional int32 mousedy = 15;
inline bool CBaseUserCmdPB::has_mousedy() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void CBaseUserCmdPB::set_has_mousedy() {
  _has_bits_[0] |= 0x00004000u;
}
inline void CBaseUserCmdPB::clear_has_mousedy() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void CBaseUserCmdPB::clear_mousedy() {
  mousedy_ = 0;
  clear_has_mousedy();
}
inline ::google::protobuf::int32 CBaseUserCmdPB::mousedy() const {
  return mousedy_;
}
inline void CBaseUserCmdPB::set_mousedy(::google::protobuf::int32 value) {
  set_has_mousedy();
  mousedy_ = value;
}

// optional bool hasbeenpredicted = 16;
inline bool CBaseUserCmdPB::has_hasbeenpredicted() const {
  return (_has_bits_[0] & 0x00008000u) != 0;
}
inline void CBaseUserCmdPB::set_has_hasbeenpredicted() {
  _has_bits_[0] |= 0x00008000u;
}
inline void CBaseUserCmdPB::clear_has_hasbeenpredicted() {
  _has_bits_[0] &= ~0x00008000u;
}
inline void CBaseUserCmdPB::clear_hasbeenpredicted() {
  hasbeenpredicted_ = false;
  clear_has_hasbeenpredicted();
}
inline bool CBaseUserCmdPB::hasbeenpredicted() const {
  return hasbeenpredicted_;
}
inline void CBaseUserCmdPB::set_hasbeenpredicted(bool value) {
  set_has_hasbeenpredicted();
  hasbeenpredicted_ = value;
}

// -------------------------------------------------------------------

// CUserCmdPB

// optional .CBaseUserCmdPB base = 1;
inline bool CUserCmdPB::has_base() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CUserCmdPB::set_has_base() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CUserCmdPB::clear_has_base() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CUserCmdPB::clear_base() {
  if (base_ != NULL) base_->::CBaseUserCmdPB::Clear();
  clear_has_base();
}
inline const ::CBaseUserCmdPB& CUserCmdPB::base() const {
  return base_ != NULL ? *base_ : *default_instance_->base_;
}
inline ::CBaseUserCmdPB* CUserCmdPB::mutable_base() {
  set_has_base();
  if (base_ == NULL) base_ = new ::CBaseUserCmdPB;
  return base_;
}
inline ::CBaseUserCmdPB* CUserCmdPB::release_base() {
  clear_has_base();
  ::CBaseUserCmdPB* temp = base_;
  base_ = NULL;
  return temp;
}
inline void CUserCmdPB::set_allocated_base(::CBaseUserCmdPB* base) {
  delete base_;
  base_ = base;
  if (base) {
    set_has_base();
  } else {
    clear_has_base();
  }
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_usercmd_2eproto__INCLUDED
