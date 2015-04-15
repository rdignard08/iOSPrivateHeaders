
@protocol NSCopying, NSMutableCopying, NSCoding;
@interface NSParagraphStyle : NSObject <NSCopying, NSMutableCopying, NSCoding> {

    d _lineSpacing;
    d _paragraphSpacing;
    d _headIndent;
    d _tailIndent;
    d _firstLineHeadIndent;
    d _minimumLineHeight;
    d _maximumLineHeight;
    @"NSArray" _tabStops;
    {?="alignment"b4"lineBreakMode"b4"tabStopsIsMutable"b1"isNaturalDirection"b1"rightToLeftDirection"b1"fixedMultiple"b2"refCount"b19} _flags;
    d _defaultTabInterval;
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
 + (q) defaultWritingDirectionForLanguage:(id)a;
 + (id) defaultParagraphStyle;
 + (q) _defaultWritingDirection;

 - (q) _ui_resolvedTextAlignment;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) textBlocks;
 - (f) hyphenationFactor;
 - (f) tighteningFactorForTruncation;
 - (id) textLists;
 - (void) _allocExtraData;
 - (q) headerLevel;
 - (id) _initWithParagraphStyle:(id)a;
 - (void) _deallocExtraData;
 - (BOOL) _isSuitableForFastStringDrawingWithAlignment:(^q)alineBreakMode:(^q)btighteningFactorForTruncation:(^d)c;
 - (q) alignment;
 - (d) firstLineHeadIndent;
 - (d) headIndent;
 - (d) tailIndent;
 - (id) tabStops;
 - (d) defaultTabInterval;
 - (q) lineBreakMode;
 - (d) lineHeightMultiple;
 - (d) maximumLineHeight;
 - (d) minimumLineHeight;
 - (d) lineSpacing;
 - (d) paragraphSpacing;
 - (d) paragraphSpacingBefore;
 - (q) baseWritingDirection;


@end
