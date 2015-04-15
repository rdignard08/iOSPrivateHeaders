
@interface BSMutableAnimationSettings : BSAnimationSettings {

}
 + (id) settingsWithDuration:(double)a;
 + (id) settingsWithDuration:(double)atimingFunction:(id)b;
 + (id) settingsWithDuration:(double)adelay:(double)b;
 + (id) settingsWithDuration:(double)adelay:(double)btimingFunction:(id)c;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) setDelay:(double)a;
 - (void) setFrameInterval:(double)a;
 - (void) setDuration:(double)a;
 - (void) setTimingFunction:(id)a;


@end
