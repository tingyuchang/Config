//  Created by Matt Chang on 2014/6/10.

#pragma mark - Fuction

#if defined (__GNUC__) && (__GNUC__ >= 4)
#define TT_ATTRIBUTES(attr, ...) __attribute__((attr, ##__VA_ARGS__))
#else  // defined (__GNUC__) && (__GNUC__ >= 4)
#define MANA_ATTRIBUTES(attr, ...)
#endif
/**
 *
 * ex: 
 * BURST_LINK void setDefaultRequestSettings(NSMutableURLRequest *request)
 *  {
 *      [request setTimeoutInterval:DEFAULT_TIMEOUT_INTERVAL];
 *      [request setValue:[DeviceInfoUtility userAgent] forHTTPHeaderField:USER_AGENT];
 *  }
 *
 */
#define BURST_LINK static __inline__ TT_ATTRIBUTES(always_inline)
// 把參數帶入前面的函式
#define INVOKE_HANDLER(function, ...)  if (function) { function(__VA_ARGS__); }
// TTLog always displays output regardless of the DEBUG setting
#define TTLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

#pragma mark - UI

// using hex text: ColorFromHex(0xecf0f1) = rgb(236, 240, 241)
#define ColorFromHex(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define ColorFromRGB(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1];
