
@protocol NSCopying, NSMutableCopying, NSCoding;
@interface NSParagraphStyle : NSObject <NSCopying, NSMutableCopying, NSCoding> {

    double _lineSpacing;
    double _paragraphSpacing;
    double _headIndent;
    double _tailIndent;
    double _firstLineHeadIndent;
    double _minimumLineHeight;
    double _maximumLineHeight;
    @"NSArray" _tabStops;
    {?="alignment"b4"lineBreakMode"b4"tabStopsIsMutable"b1"isNaturalDirection"b1"rightToLeftDirection"b1"fixedMultiple"b2"refCount"b19} _flags;
    double _defaultTabInterval;
    id _extraData;
}
@property (atomic, assign, readonly) NSNumber* lineSpacing;
@property (atomic, assign, readonly) NSNumber* paragraphSpacing;
@property (atomic, assign, readonly) NSNumber* alignment;
@property (atomic, assign, readonly) NSNumber* headIndent;
@property (atomic, assign, readonly) NSNumber* tailIndent;
@property (atomic, assign, readonly) NSNumber* firstLineHeadIndent;
@property (atomic, assign, readonly) NSNumber* minimumLineHeight;
@property (atomic, assign, readonly) NSNumber* maximumLineHeight;
@property (atomic, assign, readonly) NSNumber* lineBreakMode;
@property (atomic, assign, readonly) NSNumber* baseWritingDirection;
@property (atomic, assign, readonly) NSNumber* lineHeightMultiple;
@property (atomic, assign, readonly) NSNumber* paragraphSpacingBefore;
@property (atomic, assign, readonly) NSNumber* hyphenationFactor;
@property (nonatomic, copy, readonly) NSArray* tabStops;
@property (nonatomic, assign, readonly) NSNumber* defaultTabInterval;
 + (void) initialize;
 + (long long) defaultWritingDirectionForLanguage:(id)a;
 + (id) defaultParagraphStyle;
 + (long long) _defaultWritingDirection;

 - (long long) _ui_resolvedTextAlignment;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) textBlocks;
 - (float) hyphenationFactor;
 - (float) tighteningFactorForTruncation;
 - (id) textLists;
 - (void) _allocExtraData;
 - (long long) headerLevel;
 - (id) _initWithParagraphStyle:(id)a;
 - (void) _deallocExtraData;
 - (BOOL) _isSuitableForFastStringDrawingWithAlignment:(^q)alineBreakMode:(^q)btighteningFactorForTruncation:(^d)c;
 - (long long) alignment;
 - (double) firstLineHeadIndent;
 - (double) headIndent;
 - (double) tailIndent;
 - (id) tabStops;
 - (double) defaultTabInterval;
 - (long long) lineBreakMode;
 - (double) lineHeightMultiple;
 - (double) maximumLineHeight;
 - (double) minimumLineHeight;
 - (double) lineSpacing;
 - (double) paragraphSpacing;
 - (double) paragraphSpacingBefore;
 - (long long) baseWritingDirection;


@end
