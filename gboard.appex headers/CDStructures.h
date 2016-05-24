//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class GPBMessage, NSData, NSOutputStream, NSString, PBArray, PBGeneratedMessage;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AndroidDecoderWrapper;

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double _field1;
    double _field2;
};

struct CollectionConfig {
    CDUnknownFunctionPointerType *_field1;
    struct UnknownFieldSet _field2;
    struct RepeatedPtrField<cerebra_sense::messaging::CollectionConfig_Collection> _field3;
    int _field4;
    unsigned int _field5[1];
};

struct Conv2Query;

struct DB;

struct DynamicLmWrapper;

struct GPBCodedInputStreamState {
    char *bytes;
    unsigned long long bufferSize;
    unsigned long long bufferPos;
    unsigned long long currentLimit;
    int lastTag;
    unsigned long long recursionDepth;
};

struct GPBExtensionDescription {
    CDUnion_88782d86 _field1;
    char *_field2;
    char *_field3;
    char *_field4;
    CDUnknownFunctionPointerType _field5;
    int _field6;
    unsigned char _field7;
    unsigned char _field8;
};

struct GPBExtensionRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct GPBMessageFieldDescription {
    char *_field1;
    union {
        char *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
    } _field2;
    unsigned int _field3;
    int _field4;
    unsigned int _field5;
    unsigned short _field6;
    unsigned char _field7;
};

struct GPBMessage_Storage {
    unsigned int _field1[0];
};

struct GPBOutputBufferState {
    char *bytes;
    unsigned long long size;
    unsigned long long position;
    NSOutputStream *output;
};

struct MessageLite {
    CDUnknownFunctionPointerType *_field1;
};

struct NSDictionary {
    Class _field1;
};

struct NSMutableArray {
    Class _field1;
};

struct NSString {
    Class _field1;
};

struct PBExtensionDescription {
    char *_field1;
    int _field2;
    char *_field3;
    int _field4;
    CDUnion_4a31c45d _field5;
    char *_field6;
    unsigned int _field7;
    char *_field8;
};

struct PBInputBufferState {
    char *bytes;
    unsigned long long bufferSize;
    unsigned long long bufferPos;
    unsigned long long currentLimit;
};

struct PBMessageEnumDescription {
    char *_field1;
};

struct PBMessageEnumValueDescription {
    char *_field1;
    int _field2;
};

struct PBMessageExtensionRangeDescription {
    unsigned int _field1;
    unsigned int _field2;
};

struct PBMessageFieldDescription {
    char *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    int _field5;
    unsigned long long _field6;
    char *_field7;
    CDUnion_4a31c45d _field8;
    union {
        char *_field1;
        CDUnknownFunctionPointerType _field2;
    } _field9;
};

struct PBOutputBufferState {
    char *bytes;
    unsigned long long size;
    unsigned long long position;
    NSOutputStream *output;
};

struct QueryRuleSet {
    CDUnknownFunctionPointerType *_field1;
    struct UnknownFieldSet _field2;
    struct RepeatedPtrField<cerebra_sense::messaging::QueryRule> _field3;
    int _field4;
    unsigned int _field5[1];
};

struct QueryRule_Metadata {
    CDUnknownFunctionPointerType *_field1;
    struct UnknownFieldSet _field2;
    basic_string_3f66b750 *_field3;
    struct RepeatedPtrField<cerebra_sense::messaging::Term> _field4;
    struct RepeatedPtrField<std::__1::basic_string<char>> _field5;
    int _field6;
    unsigned int _field7[1];
};

struct RepeatedPtrField<cerebra_sense::messaging::CollectionConfig_Collection> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<cerebra_sense::messaging::QueryRule> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<cerebra_sense::messaging::Term> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<std::__1::basic_string<char>> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIView {
    Class _field1;
};

struct UnknownFieldSet {
    struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField>> *_field1;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *_field1;
                    unsigned long long _field2;
                    unsigned long long _field3;
                } _field1;
                struct __short {
                    unsigned char _field1[23];
                    struct {
                        unsigned char _field1;
                    } _field2;
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct gpr_slice {
    struct gpr_slice_refcount *_field1;
    union {
        struct {
            char *_field1;
            unsigned long long _field2;
        } _field1;
        struct {
            unsigned char _field1;
            unsigned char _field2[15];
        } _field2;
    } _field2;
};

struct gpr_slice_refcount;

struct grpc_byte_buffer {
    void *_field1;
    int _field2;
    union {
        CDStruct_d7a492ad _field1;
        struct {
            int _field1;
            struct {
                struct gpr_slice *_field1;
                unsigned long long _field2;
                unsigned long long _field3;
                unsigned long long _field4;
                struct gpr_slice _field5[8];
            } _field2;
        } _field2;
    } _field3;
};

struct grpc_metadata {
    char *_field1;
    char *_field2;
    unsigned long long _field3;
    unsigned int _field4;
    struct {
        void *_field1[4];
    } _field5;
};

struct grpc_op {
    int op;
    unsigned int flags;
    void *reserved;
    union {
        CDStruct_d7a492ad reserved;
        struct {
            unsigned long long count;
            struct grpc_metadata *metadata;
        } send_initial_metadata;
        struct grpc_byte_buffer *send_message;
        struct {
            unsigned long long trailing_metadata_count;
            struct grpc_metadata *trailing_metadata;
            int status;
            char *status_details;
        } send_status_from_server;
        CDStruct_183601bc *recv_initial_metadata;
        struct grpc_byte_buffer **recv_message;
        struct {
            CDStruct_183601bc *trailing_metadata;
            int *status;
            char **status_details;
            unsigned long long *status_details_capacity;
        } recv_status_on_client;
        struct {
            int *cancelled;
        } recv_close_on_server;
    } data;
};

struct in_addr {
    unsigned int _field1;
};

struct leveldbImpl {
    struct DB *_field1;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct unique_ptr<cerebra_sense::messaging::Conv2Query, std::__1::default_delete<cerebra_sense::messaging::Conv2Query>> {
    struct __compressed_pair<cerebra_sense::messaging::Conv2Query *, std::__1::default_delete<cerebra_sense::messaging::Conv2Query>> {
        struct Conv2Query *__first_;
    } __ptr_;
};

struct unique_ptr<keyboard::decoder::runtime::AndroidDecoderWrapper, std::__1::default_delete<keyboard::decoder::runtime::AndroidDecoderWrapper>> {
    struct __compressed_pair<keyboard::decoder::runtime::AndroidDecoderWrapper *, std::__1::default_delete<keyboard::decoder::runtime::AndroidDecoderWrapper>> {
        struct AndroidDecoderWrapper *__first_;
    } __ptr_;
};

struct unique_ptr<keyboard::decoder::runtime::DynamicLmWrapper, std::__1::default_delete<keyboard::decoder::runtime::DynamicLmWrapper>> {
    struct __compressed_pair<keyboard::decoder::runtime::DynamicLmWrapper *, std::__1::default_delete<keyboard::decoder::runtime::DynamicLmWrapper>> {
        struct DynamicLmWrapper *__first_;
    } __ptr_;
};

struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField>>;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long state;
    id *itemsPtr;
    unsigned long long *mutationsPtr;
    unsigned long long extra[5];
} CDStruct_58648341;

typedef struct {
    void *reserved[8];
} CDStruct_d7a492ad;

typedef struct {
    char *_field1;
    char *_field2;
} CDStruct_91a0c811;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    long long _field1;
    double _field2;
    double _field3;
} CDStruct_7b7c8ae7;

typedef struct CDStruct_183601bc;

typedef struct {
    unsigned long long count;
    unsigned long long capacity;
    struct grpc_metadata *metadata;
} CDStruct_6f820e53;

typedef struct {
    char *_field1;
    CDStruct_183601bc *_field2;
} CDStruct_21549188;

typedef struct {
    char *_field1;
    CDStruct_d2b197d1 _field2;
    CDStruct_183601bc *_field3;
    CDStruct_183601bc *_field4;
} CDStruct_5401d8df;

typedef struct {
    char *_field1;
    CDStruct_d2b197d1 _field2;
    double _field3;
    double _field4;
} CDStruct_659d6523;

typedef struct {
    double _field1;
    struct CGSize _field2;
    float _field3;
    double _field4;
    struct CGSize _field5;
    float _field6;
} CDStruct_d89942a0;

typedef struct {
    struct CGPoint _field1;
    struct CGPoint _field2;
} CDStruct_e3b9714e;

// Template types
typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *_field1;
                    unsigned long long _field2;
                    unsigned long long _field3;
                } _field1;
                struct __short {
                    unsigned char _field1[23];
                    struct {
                        unsigned char _field1;
                    } _field2;
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
} basic_string_3f66b750;

#pragma mark Typedef'd Unions

typedef union {
    _Bool valueBool;
    unsigned int valueFixed32;
    int valueSFixed32;
    float valueFloat;
    unsigned long long valueFixed64;
    long long valueSFixed64;
    double valueDouble;
    int valueInt32;
    long long valueInt64;
    int valueSInt32;
    long long valueSInt64;
    unsigned int valueUInt32;
    unsigned long long valueUInt64;
    NSData *valueData;
    NSString *valueString;
    PBGeneratedMessage *valueMessage;
    PBGeneratedMessage *valueGroup;
    int valueEnum;
    PBArray *valueArray;
    id valueObject;
} CDUnion_4a31c45d;

typedef union {
    _Bool valueBool;
    int valueInt32;
    long long valueInt64;
    unsigned int valueUInt32;
    unsigned long long valueUInt64;
    float valueFloat;
    double valueDouble;
    NSData *valueData;
    NSString *valueString;
    GPBMessage *valueMessage;
    int valueEnum;
} CDUnion_88782d86;

