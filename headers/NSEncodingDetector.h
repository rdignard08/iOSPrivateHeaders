
@interface NSEncodingDetector : NSObject {

    unsigned int _encoding;
    unsigned long long _givenNumBytes;
    unsigned long long _numChars;
    unsigned long long _numMultiByteChars;
    unsigned long long _numSingleBytechars;
    unsigned long long _skipBytes;
    unsigned long long _numZeroBytes;
    unsigned long long _mostFrqChars;
    unsigned long long _numBigrams;
    unsigned long long _numRep;
    unsigned long long _numDirect;
    unsigned long long _numBase64;
    unsigned long long _numSeq;
    unsigned long long _numTrigram;
    unsigned long long _numLower;
    unsigned long long _numHigher;
    double _weight;
    BOOL _hasBase64;
    BOOL _isBigEndian;
    BOOL _hasBOM;
    unsigned int _tag;
}
 + (id) encodingDetectorWithEncoding:(unsigned long long)a;

 - (unsigned long long) recognizeString:(r*)awithDataLength:(unsigned long long)bwithReplacement:(r*)cwithReplacementLength:(unsigned long long)dinNewData:(char*)emaxBufferLength:(unsigned long long)factualBufferLength:(^Q)g;
 - (void) reset;
 - (void) softReset;
 - (double) bytesRatio;
 - (unsigned long long) maxSkipBytes;
 - (double) confidence;
 - (double) confidenceWith2Chars;
 - (double) multiBytesRatio;
 - (id) init;


@end
