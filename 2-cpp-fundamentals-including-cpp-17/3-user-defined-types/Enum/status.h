// old style enum (lack of scoping)
enum Status {
  PENDING,
  APPROVED,
  CANCELLED
};

// modern style scoped enum 
enum class FileError{
  NOT_FOUND,
  OK
};

enum class NetworkError{
  DISCONNECTED,
  OK
};