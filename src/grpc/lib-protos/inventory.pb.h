// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: inventory.proto

#ifndef PROTOBUF_inventory_2eproto__INCLUDED
#define PROTOBUF_inventory_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "telemetry_top.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_inventory_2eproto();
void protobuf_AssignDesc_inventory_2eproto();
void protobuf_ShutdownFile_inventory_2eproto();

class Component;
class Inventory;
class InventoryKeyVal;

enum ComponentType {
  Null = 0,
  Port = 1,
  Linecard = 2,
  Optic = 3,
  Backplane = 4
};
bool ComponentType_IsValid(int value);
const ComponentType ComponentType_MIN = Null;
const ComponentType ComponentType_MAX = Backplane;
const int ComponentType_ARRAYSIZE = ComponentType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ComponentType_descriptor();
inline const ::std::string& ComponentType_Name(ComponentType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ComponentType_descriptor(), value);
}
inline bool ComponentType_Parse(
    const ::std::string& name, ComponentType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ComponentType>(
    ComponentType_descriptor(), name, value);
}
// ===================================================================

class Inventory : public ::google::protobuf::Message {
 public:
  Inventory();
  virtual ~Inventory();

  Inventory(const Inventory& from);

  inline Inventory& operator=(const Inventory& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Inventory& default_instance();

  void Swap(Inventory* other);

  // implements Message ----------------------------------------------

  inline Inventory* New() const { return New(NULL); }

  Inventory* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Inventory& from);
  void MergeFrom(const Inventory& from);
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
  void InternalSwap(Inventory* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .Component component = 1;
  int component_size() const;
  void clear_component();
  static const int kComponentFieldNumber = 1;
  const ::Component& component(int index) const;
  ::Component* mutable_component(int index);
  ::Component* add_component();
  ::google::protobuf::RepeatedPtrField< ::Component >*
      mutable_component();
  const ::google::protobuf::RepeatedPtrField< ::Component >&
      component() const;

  // @@protoc_insertion_point(class_scope:Inventory)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::Component > component_;
  friend void  protobuf_AddDesc_inventory_2eproto();
  friend void protobuf_AssignDesc_inventory_2eproto();
  friend void protobuf_ShutdownFile_inventory_2eproto();

  void InitAsDefaultInstance();
  static Inventory* default_instance_;
};
// -------------------------------------------------------------------

class Component : public ::google::protobuf::Message {
 public:
  Component();
  virtual ~Component();

  Component(const Component& from);

  inline Component& operator=(const Component& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Component& default_instance();

  void Swap(Component* other);

  // implements Message ----------------------------------------------

  inline Component* New() const { return New(NULL); }

  Component* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Component& from);
  void MergeFrom(const Component& from);
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
  void InternalSwap(Component* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional uint32 serial_number = 2;
  bool has_serial_number() const;
  void clear_serial_number();
  static const int kSerialNumberFieldNumber = 2;
  ::google::protobuf::uint32 serial_number() const;
  void set_serial_number(::google::protobuf::uint32 value);

  // optional uint32 part_number = 3;
  bool has_part_number() const;
  void clear_part_number();
  static const int kPartNumberFieldNumber = 3;
  ::google::protobuf::uint32 part_number() const;
  void set_part_number(::google::protobuf::uint32 value);

  // optional string description = 4;
  bool has_description() const;
  void clear_description();
  static const int kDescriptionFieldNumber = 4;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);

  // optional .ComponentType type = 5;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 5;
  ::ComponentType type() const;
  void set_type(::ComponentType value);

  // repeated .InventoryKeyVal properties = 6;
  int properties_size() const;
  void clear_properties();
  static const int kPropertiesFieldNumber = 6;
  const ::InventoryKeyVal& properties(int index) const;
  ::InventoryKeyVal* mutable_properties(int index);
  ::InventoryKeyVal* add_properties();
  ::google::protobuf::RepeatedPtrField< ::InventoryKeyVal >*
      mutable_properties();
  const ::google::protobuf::RepeatedPtrField< ::InventoryKeyVal >&
      properties() const;

  // repeated .InventoryKeyVal operational_state = 7;
  int operational_state_size() const;
  void clear_operational_state();
  static const int kOperationalStateFieldNumber = 7;
  const ::InventoryKeyVal& operational_state(int index) const;
  ::InventoryKeyVal* mutable_operational_state(int index);
  ::InventoryKeyVal* add_operational_state();
  ::google::protobuf::RepeatedPtrField< ::InventoryKeyVal >*
      mutable_operational_state();
  const ::google::protobuf::RepeatedPtrField< ::InventoryKeyVal >&
      operational_state() const;

  // repeated string sub_components = 8;
  int sub_components_size() const;
  void clear_sub_components();
  static const int kSubComponentsFieldNumber = 8;
  const ::std::string& sub_components(int index) const;
  ::std::string* mutable_sub_components(int index);
  void set_sub_components(int index, const ::std::string& value);
  void set_sub_components(int index, const char* value);
  void set_sub_components(int index, const char* value, size_t size);
  ::std::string* add_sub_components();
  void add_sub_components(const ::std::string& value);
  void add_sub_components(const char* value);
  void add_sub_components(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& sub_components() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_sub_components();

  // @@protoc_insertion_point(class_scope:Component)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_serial_number();
  inline void clear_has_serial_number();
  inline void set_has_part_number();
  inline void clear_has_part_number();
  inline void set_has_description();
  inline void clear_has_description();
  inline void set_has_type();
  inline void clear_has_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::uint32 serial_number_;
  ::google::protobuf::uint32 part_number_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  ::google::protobuf::RepeatedPtrField< ::InventoryKeyVal > properties_;
  ::google::protobuf::RepeatedPtrField< ::InventoryKeyVal > operational_state_;
  ::google::protobuf::RepeatedPtrField< ::std::string> sub_components_;
  int type_;
  friend void  protobuf_AddDesc_inventory_2eproto();
  friend void protobuf_AssignDesc_inventory_2eproto();
  friend void protobuf_ShutdownFile_inventory_2eproto();

  void InitAsDefaultInstance();
  static Component* default_instance_;
};
// -------------------------------------------------------------------

class InventoryKeyVal : public ::google::protobuf::Message {
 public:
  InventoryKeyVal();
  virtual ~InventoryKeyVal();

  InventoryKeyVal(const InventoryKeyVal& from);

  inline InventoryKeyVal& operator=(const InventoryKeyVal& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const InventoryKeyVal& default_instance();

  void Swap(InventoryKeyVal* other);

  // implements Message ----------------------------------------------

  inline InventoryKeyVal* New() const { return New(NULL); }

  InventoryKeyVal* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const InventoryKeyVal& from);
  void MergeFrom(const InventoryKeyVal& from);
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
  void InternalSwap(InventoryKeyVal* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string key = 1;
  bool has_key() const;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // optional int64 int_value = 2;
  bool has_int_value() const;
  void clear_int_value();
  static const int kIntValueFieldNumber = 2;
  ::google::protobuf::int64 int_value() const;
  void set_int_value(::google::protobuf::int64 value);

  // optional string str_value = 3;
  bool has_str_value() const;
  void clear_str_value();
  static const int kStrValueFieldNumber = 3;
  const ::std::string& str_value() const;
  void set_str_value(const ::std::string& value);
  void set_str_value(const char* value);
  void set_str_value(const char* value, size_t size);
  ::std::string* mutable_str_value();
  ::std::string* release_str_value();
  void set_allocated_str_value(::std::string* str_value);

  // @@protoc_insertion_point(class_scope:InventoryKeyVal)
 private:
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_int_value();
  inline void clear_has_int_value();
  inline void set_has_str_value();
  inline void clear_has_str_value();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::int64 int_value_;
  ::google::protobuf::internal::ArenaStringPtr str_value_;
  friend void  protobuf_AddDesc_inventory_2eproto();
  friend void protobuf_AssignDesc_inventory_2eproto();
  friend void protobuf_ShutdownFile_inventory_2eproto();

  void InitAsDefaultInstance();
  static InventoryKeyVal* default_instance_;
};
// ===================================================================

static const int kJnprInventoryExtFieldNumber = 13;
extern ::google::protobuf::internal::ExtensionIdentifier< ::JuniperNetworksSensors,
    ::google::protobuf::internal::MessageTypeTraits< ::Inventory >, 11, false >
  jnpr_inventory_ext;

// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Inventory

// repeated .Component component = 1;
inline int Inventory::component_size() const {
  return component_.size();
}
inline void Inventory::clear_component() {
  component_.Clear();
}
inline const ::Component& Inventory::component(int index) const {
  // @@protoc_insertion_point(field_get:Inventory.component)
  return component_.Get(index);
}
inline ::Component* Inventory::mutable_component(int index) {
  // @@protoc_insertion_point(field_mutable:Inventory.component)
  return component_.Mutable(index);
}
inline ::Component* Inventory::add_component() {
  // @@protoc_insertion_point(field_add:Inventory.component)
  return component_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::Component >*
Inventory::mutable_component() {
  // @@protoc_insertion_point(field_mutable_list:Inventory.component)
  return &component_;
}
inline const ::google::protobuf::RepeatedPtrField< ::Component >&
Inventory::component() const {
  // @@protoc_insertion_point(field_list:Inventory.component)
  return component_;
}

// -------------------------------------------------------------------

// Component

// required string name = 1;
inline bool Component::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Component::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Component::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Component::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& Component::name() const {
  // @@protoc_insertion_point(field_get:Component.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Component::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Component.name)
}
inline void Component::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Component.name)
}
inline void Component::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Component.name)
}
inline ::std::string* Component::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:Component.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Component::release_name() {
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Component::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Component.name)
}

// optional uint32 serial_number = 2;
inline bool Component::has_serial_number() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Component::set_has_serial_number() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Component::clear_has_serial_number() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Component::clear_serial_number() {
  serial_number_ = 0u;
  clear_has_serial_number();
}
inline ::google::protobuf::uint32 Component::serial_number() const {
  // @@protoc_insertion_point(field_get:Component.serial_number)
  return serial_number_;
}
inline void Component::set_serial_number(::google::protobuf::uint32 value) {
  set_has_serial_number();
  serial_number_ = value;
  // @@protoc_insertion_point(field_set:Component.serial_number)
}

// optional uint32 part_number = 3;
inline bool Component::has_part_number() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Component::set_has_part_number() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Component::clear_has_part_number() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Component::clear_part_number() {
  part_number_ = 0u;
  clear_has_part_number();
}
inline ::google::protobuf::uint32 Component::part_number() const {
  // @@protoc_insertion_point(field_get:Component.part_number)
  return part_number_;
}
inline void Component::set_part_number(::google::protobuf::uint32 value) {
  set_has_part_number();
  part_number_ = value;
  // @@protoc_insertion_point(field_set:Component.part_number)
}

// optional string description = 4;
inline bool Component::has_description() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Component::set_has_description() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Component::clear_has_description() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Component::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_description();
}
inline const ::std::string& Component::description() const {
  // @@protoc_insertion_point(field_get:Component.description)
  return description_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Component::set_description(const ::std::string& value) {
  set_has_description();
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Component.description)
}
inline void Component::set_description(const char* value) {
  set_has_description();
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Component.description)
}
inline void Component::set_description(const char* value, size_t size) {
  set_has_description();
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Component.description)
}
inline ::std::string* Component::mutable_description() {
  set_has_description();
  // @@protoc_insertion_point(field_mutable:Component.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Component::release_description() {
  clear_has_description();
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Component::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    set_has_description();
  } else {
    clear_has_description();
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:Component.description)
}

// optional .ComponentType type = 5;
inline bool Component::has_type() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Component::set_has_type() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Component::clear_has_type() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Component::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::ComponentType Component::type() const {
  // @@protoc_insertion_point(field_get:Component.type)
  return static_cast< ::ComponentType >(type_);
}
inline void Component::set_type(::ComponentType value) {
  assert(::ComponentType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:Component.type)
}

// repeated .InventoryKeyVal properties = 6;
inline int Component::properties_size() const {
  return properties_.size();
}
inline void Component::clear_properties() {
  properties_.Clear();
}
inline const ::InventoryKeyVal& Component::properties(int index) const {
  // @@protoc_insertion_point(field_get:Component.properties)
  return properties_.Get(index);
}
inline ::InventoryKeyVal* Component::mutable_properties(int index) {
  // @@protoc_insertion_point(field_mutable:Component.properties)
  return properties_.Mutable(index);
}
inline ::InventoryKeyVal* Component::add_properties() {
  // @@protoc_insertion_point(field_add:Component.properties)
  return properties_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::InventoryKeyVal >*
Component::mutable_properties() {
  // @@protoc_insertion_point(field_mutable_list:Component.properties)
  return &properties_;
}
inline const ::google::protobuf::RepeatedPtrField< ::InventoryKeyVal >&
Component::properties() const {
  // @@protoc_insertion_point(field_list:Component.properties)
  return properties_;
}

// repeated .InventoryKeyVal operational_state = 7;
inline int Component::operational_state_size() const {
  return operational_state_.size();
}
inline void Component::clear_operational_state() {
  operational_state_.Clear();
}
inline const ::InventoryKeyVal& Component::operational_state(int index) const {
  // @@protoc_insertion_point(field_get:Component.operational_state)
  return operational_state_.Get(index);
}
inline ::InventoryKeyVal* Component::mutable_operational_state(int index) {
  // @@protoc_insertion_point(field_mutable:Component.operational_state)
  return operational_state_.Mutable(index);
}
inline ::InventoryKeyVal* Component::add_operational_state() {
  // @@protoc_insertion_point(field_add:Component.operational_state)
  return operational_state_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::InventoryKeyVal >*
Component::mutable_operational_state() {
  // @@protoc_insertion_point(field_mutable_list:Component.operational_state)
  return &operational_state_;
}
inline const ::google::protobuf::RepeatedPtrField< ::InventoryKeyVal >&
Component::operational_state() const {
  // @@protoc_insertion_point(field_list:Component.operational_state)
  return operational_state_;
}

// repeated string sub_components = 8;
inline int Component::sub_components_size() const {
  return sub_components_.size();
}
inline void Component::clear_sub_components() {
  sub_components_.Clear();
}
inline const ::std::string& Component::sub_components(int index) const {
  // @@protoc_insertion_point(field_get:Component.sub_components)
  return sub_components_.Get(index);
}
inline ::std::string* Component::mutable_sub_components(int index) {
  // @@protoc_insertion_point(field_mutable:Component.sub_components)
  return sub_components_.Mutable(index);
}
inline void Component::set_sub_components(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:Component.sub_components)
  sub_components_.Mutable(index)->assign(value);
}
inline void Component::set_sub_components(int index, const char* value) {
  sub_components_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:Component.sub_components)
}
inline void Component::set_sub_components(int index, const char* value, size_t size) {
  sub_components_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Component.sub_components)
}
inline ::std::string* Component::add_sub_components() {
  return sub_components_.Add();
}
inline void Component::add_sub_components(const ::std::string& value) {
  sub_components_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:Component.sub_components)
}
inline void Component::add_sub_components(const char* value) {
  sub_components_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:Component.sub_components)
}
inline void Component::add_sub_components(const char* value, size_t size) {
  sub_components_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:Component.sub_components)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Component::sub_components() const {
  // @@protoc_insertion_point(field_list:Component.sub_components)
  return sub_components_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Component::mutable_sub_components() {
  // @@protoc_insertion_point(field_mutable_list:Component.sub_components)
  return &sub_components_;
}

// -------------------------------------------------------------------

// InventoryKeyVal

// required string key = 1;
inline bool InventoryKeyVal::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void InventoryKeyVal::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void InventoryKeyVal::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void InventoryKeyVal::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_key();
}
inline const ::std::string& InventoryKeyVal::key() const {
  // @@protoc_insertion_point(field_get:InventoryKeyVal.key)
  return key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void InventoryKeyVal::set_key(const ::std::string& value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:InventoryKeyVal.key)
}
inline void InventoryKeyVal::set_key(const char* value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:InventoryKeyVal.key)
}
inline void InventoryKeyVal::set_key(const char* value, size_t size) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:InventoryKeyVal.key)
}
inline ::std::string* InventoryKeyVal::mutable_key() {
  set_has_key();
  // @@protoc_insertion_point(field_mutable:InventoryKeyVal.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* InventoryKeyVal::release_key() {
  clear_has_key();
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void InventoryKeyVal::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    set_has_key();
  } else {
    clear_has_key();
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:InventoryKeyVal.key)
}

// optional int64 int_value = 2;
inline bool InventoryKeyVal::has_int_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void InventoryKeyVal::set_has_int_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void InventoryKeyVal::clear_has_int_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void InventoryKeyVal::clear_int_value() {
  int_value_ = GOOGLE_LONGLONG(0);
  clear_has_int_value();
}
inline ::google::protobuf::int64 InventoryKeyVal::int_value() const {
  // @@protoc_insertion_point(field_get:InventoryKeyVal.int_value)
  return int_value_;
}
inline void InventoryKeyVal::set_int_value(::google::protobuf::int64 value) {
  set_has_int_value();
  int_value_ = value;
  // @@protoc_insertion_point(field_set:InventoryKeyVal.int_value)
}

// optional string str_value = 3;
inline bool InventoryKeyVal::has_str_value() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void InventoryKeyVal::set_has_str_value() {
  _has_bits_[0] |= 0x00000004u;
}
inline void InventoryKeyVal::clear_has_str_value() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void InventoryKeyVal::clear_str_value() {
  str_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_str_value();
}
inline const ::std::string& InventoryKeyVal::str_value() const {
  // @@protoc_insertion_point(field_get:InventoryKeyVal.str_value)
  return str_value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void InventoryKeyVal::set_str_value(const ::std::string& value) {
  set_has_str_value();
  str_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:InventoryKeyVal.str_value)
}
inline void InventoryKeyVal::set_str_value(const char* value) {
  set_has_str_value();
  str_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:InventoryKeyVal.str_value)
}
inline void InventoryKeyVal::set_str_value(const char* value, size_t size) {
  set_has_str_value();
  str_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:InventoryKeyVal.str_value)
}
inline ::std::string* InventoryKeyVal::mutable_str_value() {
  set_has_str_value();
  // @@protoc_insertion_point(field_mutable:InventoryKeyVal.str_value)
  return str_value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* InventoryKeyVal::release_str_value() {
  clear_has_str_value();
  return str_value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void InventoryKeyVal::set_allocated_str_value(::std::string* str_value) {
  if (str_value != NULL) {
    set_has_str_value();
  } else {
    clear_has_str_value();
  }
  str_value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), str_value);
  // @@protoc_insertion_point(field_set_allocated:InventoryKeyVal.str_value)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::ComponentType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ComponentType>() {
  return ::ComponentType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_inventory_2eproto__INCLUDED
