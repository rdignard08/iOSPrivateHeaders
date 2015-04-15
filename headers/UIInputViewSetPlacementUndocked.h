
@interface UIInputViewSetPlacementUndocked : UIInputViewSetPlacement {

    double _normalizedOffset;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _chromeBuffer;
}
 + (id) placementWithUndockedOffset:(double)achromeBuffer:({UIEdgeInsets=dddd})b;

 - (BOOL) isEqual:(id)a;
 - (BOOL) inputViewWillAppear;
 - (BOOL) isUndocked;
 - (id) verticalConstraintForInputViewSet:(id)ahostView:(id)bcontainerView:(id)c;
 - (void) setNormalizedOffset:(double)a;
 - (void) setChromeBuffer:({UIEdgeInsets=dddd})a;
 - ({UIEdgeInsets=dddd}) chromeBuffer;
 - (double) normalizedOffset;


@end
