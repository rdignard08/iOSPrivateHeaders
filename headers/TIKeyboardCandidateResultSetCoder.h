
@interface TIKeyboardCandidateResultSetCoder : NSObject {

    @"NSMutableData" _mutableData;
    @"NSData" _data;
    Q _offset;
}
@property (nonatomic, retain, readwrite) NSData* data;
@property (nonatomic, retain, readwrite) NSMutableData* mutableData;
@property (nonatomic, assign, readwrite) NSNumber* offset;
@property (nonatomic, assign, readonly) NSNumber* bytes;
@property (nonatomic, assign, readonly) NSNumber* currentPosition;
 + (id) decodeWithData:(id)a;
 + (id) encodeWithCandidateResultSet:(id)a;
 + (id) candidateTypeToClassNameMap;
 + (Class) classFromCandidateType:(i)a;

 - (void) setMutableData:(id)a;
 - (void) dealloc;
 - (r*) bytes;
 - (id) data;
 - (void) setData:(id)a;
 - (Q) decodeUInt64;
 - (void) encodeUInt64:(Q)a;
 - (C) decodeByte;
 - (id) decodeString;
 - (void) encodeByte:(C)a;
 - (void) encodeString:(id)a;
 - (id) initForEncoding;
 - (id) dataFromCandidateResultSet:(id)a;
 - (id) initForDecodingWithData:(id)a;
 - (id) candidateResultSet;
 - (id) initWithData:(id)amutableData:(id)b;
 - (Q) offset;
 - (id) mutableData;
 - (r*) currentPosition;
 - (void) setOffset:(Q)a;
 - (I) decodeUInt32;
 - (void) encodeStringArray:(id)a;
 - (void) encodeUInt32:(I)a;
 - (void) encodeShort:(S)a;
 - (id) decodeCandidate;
 - (id) decodeStringArray;
 - (S) decodeShort;
 - (void) encodeBool:(BOOL)a;
 - (BOOL) decodeBool;
 - (void) encodePointerValueArray:(id)a;
 - (id) decodePointerValueArray;


@end
