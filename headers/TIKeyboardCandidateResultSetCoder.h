
@interface TIKeyboardCandidateResultSetCoder : NSObject {

    NSMutableData* _mutableData;
    NSData* _data;
    unsigned long long _offset;
}
@property (nonatomic, retain, readwrite) NSData* data;
@property (nonatomic, retain, readwrite) NSMutableData* mutableData;
@property (nonatomic, assign, readwrite) NSNumber* offset;
@property (nonatomic, assign, readonly) NSNumber* bytes;
@property (nonatomic, assign, readonly) NSNumber* currentPosition;
 + (id) decodeWithData:(id)a;
 + (id) encodeWithCandidateResultSet:(id)a;
 + (id) candidateTypeToClassNameMap;
 + (Class) classFromCandidateType:(int)a;

 - (void) setMutableData:(id)a ;
 - (void) dealloc;
 - (r*) bytes;
 - (id) data;
 - (void) setData:(id)a ;
 - (unsigned long long) decodeUInt64;
 - (void) encodeUInt64:(unsigned long long)a ;
 - (unsigned char) decodeByte;
 - (id) decodeString;
 - (void) encodeByte:(unsigned char)a ;
 - (void) encodeString:(id)a ;
 - (id) initForEncoding;
 - (id) dataFromCandidateResultSet:(id)a ;
 - (id) initForDecodingWithData:(id)a ;
 - (id) candidateResultSet;
 - (id) initWithData:(id)a mutableData:(id)b ;
 - (unsigned long long) offset;
 - (id) mutableData;
 - (r*) currentPosition;
 - (void) setOffset:(unsigned long long)a ;
 - (unsigned int) decodeUInt32;
 - (void) encodeStringArray:(id)a ;
 - (void) encodeUInt32:(unsigned int)a ;
 - (void) encodeShort:(unsigned short)a ;
 - (id) decodeCandidate;
 - (id) decodeStringArray;
 - (unsigned short) decodeShort;
 - (void) encodeBool:(BOOL)a ;
 - (BOOL) decodeBool;
 - (void) encodePointerValueArray:(id)a ;
 - (id) decodePointerValueArray;


@end
