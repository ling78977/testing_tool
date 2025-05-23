// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_POINT3_FOXGLOVE_H_
#define FLATBUFFERS_GENERATED_POINT3_FOXGLOVE_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 25 &&
              FLATBUFFERS_VERSION_MINOR == 2 &&
              FLATBUFFERS_VERSION_REVISION == 10,
             "Non-compatible flatbuffers version included");

namespace foxglove {

struct Point3;
struct Point3Builder;

/// A point representing a position in 3D space
struct Point3 FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef Point3Builder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_X = 4,
    VT_Y = 6,
    VT_Z = 8
  };
  /// x coordinate position
  double x() const {
    return GetField<double>(VT_X, 0.0);
  }
  bool mutate_x(double _x = 0.0) {
    return SetField<double>(VT_X, _x, 0.0);
  }
  /// y coordinate position
  double y() const {
    return GetField<double>(VT_Y, 0.0);
  }
  bool mutate_y(double _y = 0.0) {
    return SetField<double>(VT_Y, _y, 0.0);
  }
  /// z coordinate position
  double z() const {
    return GetField<double>(VT_Z, 0.0);
  }
  bool mutate_z(double _z = 0.0) {
    return SetField<double>(VT_Z, _z, 0.0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<double>(verifier, VT_X, 8) &&
           VerifyField<double>(verifier, VT_Y, 8) &&
           VerifyField<double>(verifier, VT_Z, 8) &&
           verifier.EndTable();
  }
};

struct Point3Builder {
  typedef Point3 Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_x(double x) {
    fbb_.AddElement<double>(Point3::VT_X, x, 0.0);
  }
  void add_y(double y) {
    fbb_.AddElement<double>(Point3::VT_Y, y, 0.0);
  }
  void add_z(double z) {
    fbb_.AddElement<double>(Point3::VT_Z, z, 0.0);
  }
  explicit Point3Builder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Point3> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Point3>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Point3> CreatePoint3(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    double x = 0.0,
    double y = 0.0,
    double z = 0.0) {
  Point3Builder builder_(_fbb);
  builder_.add_z(z);
  builder_.add_y(y);
  builder_.add_x(x);
  return builder_.Finish();
}

inline const foxglove::Point3 *GetPoint3(const void *buf) {
  return ::flatbuffers::GetRoot<foxglove::Point3>(buf);
}

inline const foxglove::Point3 *GetSizePrefixedPoint3(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<foxglove::Point3>(buf);
}

inline Point3 *GetMutablePoint3(void *buf) {
  return ::flatbuffers::GetMutableRoot<Point3>(buf);
}

inline foxglove::Point3 *GetMutableSizePrefixedPoint3(void *buf) {
  return ::flatbuffers::GetMutableSizePrefixedRoot<foxglove::Point3>(buf);
}

inline bool VerifyPoint3Buffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<foxglove::Point3>(nullptr);
}

inline bool VerifySizePrefixedPoint3Buffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<foxglove::Point3>(nullptr);
}

inline void FinishPoint3Buffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<foxglove::Point3> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedPoint3Buffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<foxglove::Point3> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace foxglove

#endif  // FLATBUFFERS_GENERATED_POINT3_FOXGLOVE_H_
