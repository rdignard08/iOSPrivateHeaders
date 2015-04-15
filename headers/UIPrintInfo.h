
@protocol NSCopying, NSCoding;
@interface UIPrintInfo : NSObject <NSCopying, NSCoding> {

    NSString* _printerID;
    NSString* _jobName;
    long long _outputType;
    long long _orientation;
    long long _duplex;
    long long _copies;
    BOOL _scaleUp;
}
@property (nonatomic, copy, readwrite) NSString* printerID;
@property (nonatomic, copy, readwrite) NSString* jobName;
@property (nonatomic, assign, readwrite) NSNumber* outputType;
@property (nonatomic, assign, readwrite) NSNumber* orientation;
@property (nonatomic, assign, readwrite) NSNumber* duplex;
@property (nonatomic, assign, readwrite) NSNumber* scaleUp;
@property (nonatomic, assign, readwrite) NSNumber* copies;
 + (id) printInfo;
 + (id) printInfoWithDictionary:(id)a;

 - (id) dictionaryRepresentation;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) setJobName:(id)a;
 - (void) setOutputType:(long long)a;
 - (id) _initWithDictionary:(id)a;
 - (void) setPrinterID:(id)a;
 - (void) _updateWithPrinter:(id)a;
 - (id) _createPrintSettingsForPrinter:(id)a;
 - (id) printerID;
 - (id) jobName;
 - (long long) outputType;
 - (long long) duplex;
 - (void) setDuplex:(long long)a;
 - (long long) copies;
 - (void) setCopies:(long long)a;
 - (BOOL) scaleUp;
 - (void) setScaleUp:(BOOL)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (long long) orientation;
 - (void) setOrientation:(long long)a;


@end
