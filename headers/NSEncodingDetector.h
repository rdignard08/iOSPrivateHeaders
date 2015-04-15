
@interface NSEncodingDetector : NSObject {

    I _encoding;
    Q _givenNumBytes;
    Q _numChars;
    Q _numMultiByteChars;
    Q _numSingleBytechars;
    Q _skipBytes;
    Q _numZeroBytes;
    Q _mostFrqChars;
    Q _numBigrams;
    Q _numRep;
    Q _numDirect;
    Q _numBase64;
    Q _numSeq;
    Q _numTrigram;
    Q _numLower;
    Q _numHigher;
    d _weight;
    BOOL _hasBase64;
    BOOL _isBigEndian;
    BOOL _hasBOM;
    I _tag;
}
 + (id) encodingDetectorWithEncoding:(Q)a;

 - (Q) recognizeString:(r*)awithDataLength:(Q)bwithReplacement:(r*)cwithReplacementLength:(Q)dinNewData:(*)emaxBufferLength:(Q)factualBufferLength:(^Q)g;
 - (void) reset;
 - (void) softReset;
 - (d) bytesRatio;
 - (Q) maxSkipBytes;
 - (d) confidence;
 - (d) confidenceWith2Chars;
 - (d) multiBytesRatio;
 - (id) init;


@end
