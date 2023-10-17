// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: kv_opt.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_kv_5fopt_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_kv_5fopt_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4024000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4024003 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_kv_5fopt_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_kv_5fopt_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_kv_5fopt_2eproto;
namespace kv_operate {
class Add_Req;
struct Add_ReqDefaultTypeInternal;
extern Add_ReqDefaultTypeInternal _Add_Req_default_instance_;
class Delete_Req;
struct Delete_ReqDefaultTypeInternal;
extern Delete_ReqDefaultTypeInternal _Delete_Req_default_instance_;
class Query_Req;
struct Query_ReqDefaultTypeInternal;
extern Query_ReqDefaultTypeInternal _Query_Req_default_instance_;
class Reply;
struct ReplyDefaultTypeInternal;
extern ReplyDefaultTypeInternal _Reply_default_instance_;
}  // namespace kv_operate
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace kv_operate {

// ===================================================================


// -------------------------------------------------------------------

class Add_Req final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:kv_operate.Add_Req) */ {
 public:
  inline Add_Req() : Add_Req(nullptr) {}
  ~Add_Req() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Add_Req(::google::protobuf::internal::ConstantInitialized);

  Add_Req(const Add_Req& from);
  Add_Req(Add_Req&& from) noexcept
    : Add_Req() {
    *this = ::std::move(from);
  }

  inline Add_Req& operator=(const Add_Req& from) {
    CopyFrom(from);
    return *this;
  }
  inline Add_Req& operator=(Add_Req&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Add_Req& default_instance() {
    return *internal_default_instance();
  }
  static inline const Add_Req* internal_default_instance() {
    return reinterpret_cast<const Add_Req*>(
               &_Add_Req_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Add_Req& a, Add_Req& b) {
    a.Swap(&b);
  }
  inline void Swap(Add_Req* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Add_Req* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Add_Req* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Add_Req>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Add_Req& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Add_Req& from) {
    Add_Req::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Add_Req* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "kv_operate.Add_Req";
  }
  protected:
  explicit Add_Req(::google::protobuf::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKvJsonFieldNumber = 1,
  };
  // string kv_json = 1;
  void clear_kv_json() ;
  const std::string& kv_json() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_kv_json(Arg_&& arg, Args_... args);
  std::string* mutable_kv_json();
  PROTOBUF_NODISCARD std::string* release_kv_json();
  void set_allocated_kv_json(std::string* ptr);

  private:
  const std::string& _internal_kv_json() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_kv_json(
      const std::string& value);
  std::string* _internal_mutable_kv_json();

  public:
  // @@protoc_insertion_point(class_scope:kv_operate.Add_Req)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<0, 1, 0, 34, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::ArenaStringPtr kv_json_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_kv_5fopt_2eproto;
};// -------------------------------------------------------------------

class Delete_Req final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:kv_operate.Delete_Req) */ {
 public:
  inline Delete_Req() : Delete_Req(nullptr) {}
  ~Delete_Req() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Delete_Req(::google::protobuf::internal::ConstantInitialized);

  Delete_Req(const Delete_Req& from);
  Delete_Req(Delete_Req&& from) noexcept
    : Delete_Req() {
    *this = ::std::move(from);
  }

  inline Delete_Req& operator=(const Delete_Req& from) {
    CopyFrom(from);
    return *this;
  }
  inline Delete_Req& operator=(Delete_Req&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Delete_Req& default_instance() {
    return *internal_default_instance();
  }
  static inline const Delete_Req* internal_default_instance() {
    return reinterpret_cast<const Delete_Req*>(
               &_Delete_Req_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Delete_Req& a, Delete_Req& b) {
    a.Swap(&b);
  }
  inline void Swap(Delete_Req* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Delete_Req* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Delete_Req* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Delete_Req>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Delete_Req& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Delete_Req& from) {
    Delete_Req::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Delete_Req* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "kv_operate.Delete_Req";
  }
  protected:
  explicit Delete_Req(::google::protobuf::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKeyFieldNumber = 1,
  };
  // string key = 1;
  void clear_key() ;
  const std::string& key() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_key(Arg_&& arg, Args_... args);
  std::string* mutable_key();
  PROTOBUF_NODISCARD std::string* release_key();
  void set_allocated_key(std::string* ptr);

  private:
  const std::string& _internal_key() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_key(
      const std::string& value);
  std::string* _internal_mutable_key();

  public:
  // @@protoc_insertion_point(class_scope:kv_operate.Delete_Req)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<0, 1, 0, 33, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::ArenaStringPtr key_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_kv_5fopt_2eproto;
};// -------------------------------------------------------------------

class Query_Req final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:kv_operate.Query_Req) */ {
 public:
  inline Query_Req() : Query_Req(nullptr) {}
  ~Query_Req() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Query_Req(::google::protobuf::internal::ConstantInitialized);

  Query_Req(const Query_Req& from);
  Query_Req(Query_Req&& from) noexcept
    : Query_Req() {
    *this = ::std::move(from);
  }

  inline Query_Req& operator=(const Query_Req& from) {
    CopyFrom(from);
    return *this;
  }
  inline Query_Req& operator=(Query_Req&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Query_Req& default_instance() {
    return *internal_default_instance();
  }
  static inline const Query_Req* internal_default_instance() {
    return reinterpret_cast<const Query_Req*>(
               &_Query_Req_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Query_Req& a, Query_Req& b) {
    a.Swap(&b);
  }
  inline void Swap(Query_Req* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Query_Req* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Query_Req* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Query_Req>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Query_Req& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Query_Req& from) {
    Query_Req::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Query_Req* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "kv_operate.Query_Req";
  }
  protected:
  explicit Query_Req(::google::protobuf::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKeyFieldNumber = 1,
  };
  // string key = 1;
  void clear_key() ;
  const std::string& key() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_key(Arg_&& arg, Args_... args);
  std::string* mutable_key();
  PROTOBUF_NODISCARD std::string* release_key();
  void set_allocated_key(std::string* ptr);

  private:
  const std::string& _internal_key() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_key(
      const std::string& value);
  std::string* _internal_mutable_key();

  public:
  // @@protoc_insertion_point(class_scope:kv_operate.Query_Req)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<0, 1, 0, 32, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::ArenaStringPtr key_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_kv_5fopt_2eproto;
};// -------------------------------------------------------------------

class Reply final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:kv_operate.Reply) */ {
 public:
  inline Reply() : Reply(nullptr) {}
  ~Reply() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Reply(::google::protobuf::internal::ConstantInitialized);

  Reply(const Reply& from);
  Reply(Reply&& from) noexcept
    : Reply() {
    *this = ::std::move(from);
  }

  inline Reply& operator=(const Reply& from) {
    CopyFrom(from);
    return *this;
  }
  inline Reply& operator=(Reply&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Reply& default_instance() {
    return *internal_default_instance();
  }
  static inline const Reply* internal_default_instance() {
    return reinterpret_cast<const Reply*>(
               &_Reply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(Reply& a, Reply& b) {
    a.Swap(&b);
  }
  inline void Swap(Reply* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Reply* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Reply* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Reply>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Reply& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Reply& from) {
    Reply::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Reply* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "kv_operate.Reply";
  }
  protected:
  explicit Reply(::google::protobuf::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResFieldNumber = 1,
  };
  // string res = 1;
  void clear_res() ;
  const std::string& res() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_res(Arg_&& arg, Args_... args);
  std::string* mutable_res();
  PROTOBUF_NODISCARD std::string* release_res();
  void set_allocated_res(std::string* ptr);

  private:
  const std::string& _internal_res() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_res(
      const std::string& value);
  std::string* _internal_mutable_res();

  public:
  // @@protoc_insertion_point(class_scope:kv_operate.Reply)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<0, 1, 0, 28, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::ArenaStringPtr res_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_kv_5fopt_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Add_Req

// string kv_json = 1;
inline void Add_Req::clear_kv_json() {
  _impl_.kv_json_.ClearToEmpty();
}
inline const std::string& Add_Req::kv_json() const {
  // @@protoc_insertion_point(field_get:kv_operate.Add_Req.kv_json)
  return _internal_kv_json();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Add_Req::set_kv_json(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.kv_json_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kv_operate.Add_Req.kv_json)
}
inline std::string* Add_Req::mutable_kv_json() {
  std::string* _s = _internal_mutable_kv_json();
  // @@protoc_insertion_point(field_mutable:kv_operate.Add_Req.kv_json)
  return _s;
}
inline const std::string& Add_Req::_internal_kv_json() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.kv_json_.Get();
}
inline void Add_Req::_internal_set_kv_json(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.kv_json_.Set(value, GetArenaForAllocation());
}
inline std::string* Add_Req::_internal_mutable_kv_json() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.kv_json_.Mutable( GetArenaForAllocation());
}
inline std::string* Add_Req::release_kv_json() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:kv_operate.Add_Req.kv_json)
  return _impl_.kv_json_.Release();
}
inline void Add_Req::set_allocated_kv_json(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.kv_json_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.kv_json_.IsDefault()) {
          _impl_.kv_json_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kv_operate.Add_Req.kv_json)
}

// -------------------------------------------------------------------

// Delete_Req

// string key = 1;
inline void Delete_Req::clear_key() {
  _impl_.key_.ClearToEmpty();
}
inline const std::string& Delete_Req::key() const {
  // @@protoc_insertion_point(field_get:kv_operate.Delete_Req.key)
  return _internal_key();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Delete_Req::set_key(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.key_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kv_operate.Delete_Req.key)
}
inline std::string* Delete_Req::mutable_key() {
  std::string* _s = _internal_mutable_key();
  // @@protoc_insertion_point(field_mutable:kv_operate.Delete_Req.key)
  return _s;
}
inline const std::string& Delete_Req::_internal_key() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.key_.Get();
}
inline void Delete_Req::_internal_set_key(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.key_.Set(value, GetArenaForAllocation());
}
inline std::string* Delete_Req::_internal_mutable_key() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.key_.Mutable( GetArenaForAllocation());
}
inline std::string* Delete_Req::release_key() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:kv_operate.Delete_Req.key)
  return _impl_.key_.Release();
}
inline void Delete_Req::set_allocated_key(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.key_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.key_.IsDefault()) {
          _impl_.key_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kv_operate.Delete_Req.key)
}

// -------------------------------------------------------------------

// Query_Req

// string key = 1;
inline void Query_Req::clear_key() {
  _impl_.key_.ClearToEmpty();
}
inline const std::string& Query_Req::key() const {
  // @@protoc_insertion_point(field_get:kv_operate.Query_Req.key)
  return _internal_key();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Query_Req::set_key(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.key_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kv_operate.Query_Req.key)
}
inline std::string* Query_Req::mutable_key() {
  std::string* _s = _internal_mutable_key();
  // @@protoc_insertion_point(field_mutable:kv_operate.Query_Req.key)
  return _s;
}
inline const std::string& Query_Req::_internal_key() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.key_.Get();
}
inline void Query_Req::_internal_set_key(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.key_.Set(value, GetArenaForAllocation());
}
inline std::string* Query_Req::_internal_mutable_key() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.key_.Mutable( GetArenaForAllocation());
}
inline std::string* Query_Req::release_key() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:kv_operate.Query_Req.key)
  return _impl_.key_.Release();
}
inline void Query_Req::set_allocated_key(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.key_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.key_.IsDefault()) {
          _impl_.key_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kv_operate.Query_Req.key)
}

// -------------------------------------------------------------------

// Reply

// string res = 1;
inline void Reply::clear_res() {
  _impl_.res_.ClearToEmpty();
}
inline const std::string& Reply::res() const {
  // @@protoc_insertion_point(field_get:kv_operate.Reply.res)
  return _internal_res();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Reply::set_res(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.res_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kv_operate.Reply.res)
}
inline std::string* Reply::mutable_res() {
  std::string* _s = _internal_mutable_res();
  // @@protoc_insertion_point(field_mutable:kv_operate.Reply.res)
  return _s;
}
inline const std::string& Reply::_internal_res() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.res_.Get();
}
inline void Reply::_internal_set_res(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.res_.Set(value, GetArenaForAllocation());
}
inline std::string* Reply::_internal_mutable_res() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.res_.Mutable( GetArenaForAllocation());
}
inline std::string* Reply::release_res() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:kv_operate.Reply.res)
  return _impl_.res_.Release();
}
inline void Reply::set_allocated_res(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.res_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.res_.IsDefault()) {
          _impl_.res_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kv_operate.Reply.res)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace kv_operate


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_kv_5fopt_2eproto_2epb_2eh
