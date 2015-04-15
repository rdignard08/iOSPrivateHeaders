
@protocol NSCopying, NSCoding;
@interface UIMotionEffect : NSObject <NSCopying, NSCoding> {

    @"_UIMotionAnalyzerSettings" _preferredMotionAnalyzerSettings;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (id) keyPathsAndRelativeValuesForViewerOffset:({UIOffset=dd})a;
 - (id) _preferredMotionAnalyzerSettings;
 - (id) _keyPathsAndRelativeValuesForPose:(id)a;
 - (void) _setPreferredMotionAnalyzerSettings:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
