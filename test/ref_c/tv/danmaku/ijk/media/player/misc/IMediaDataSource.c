/*
 * Copyright (C) 2015 Zhang Rui <bbcallen@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * https://github.com/Bilibili/jni4android
 * This file is automatically generated by jni4android, do not modify.
 */


#include "IMediaDataSource.h"

typedef struct J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource {
    jclass id;

    jmethodID method_readAt;
    jmethodID method_getSize;
    jmethodID method_close;
} J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource;
static J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource class_J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource;

jint J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource__readAt(JNIEnv *env, jobject thiz, jlong position, jbyteArray buffer, jint offset, jint size)
{
    return (*env)->CallIntMethod(env, thiz, class_J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource.method_readAt, position, buffer, offset, size);
}

jint J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource__readAt__catchAll(JNIEnv *env, jobject thiz, jlong position, jbyteArray buffer, jint offset, jint size)
{
    jint ret_value = J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource__readAt(env, thiz, position, buffer, offset, size);
    if (J4A_ExceptionCheck__catchAll(env)) {
        return 0;
    }

    return ret_value;
}

jlong J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource__getSize(JNIEnv *env, jobject thiz)
{
    return (*env)->CallLongMethod(env, thiz, class_J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource.method_getSize);
}

jlong J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource__getSize__catchAll(JNIEnv *env, jobject thiz)
{
    jlong ret_value = J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource__getSize(env, thiz);
    if (J4A_ExceptionCheck__catchAll(env)) {
        return 0;
    }

    return ret_value;
}

void J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource__close(JNIEnv *env, jobject thiz)
{
    (*env)->CallVoidMethod(env, thiz, class_J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource.method_close);
}

void J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource__close__catchAll(JNIEnv *env, jobject thiz)
{
    J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource__close(env, thiz);
    J4A_ExceptionCheck__catchAll(env);
}

int J4A_loadClass__J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource(JNIEnv *env)
{
    int         ret                   = -1;
    const char *J4A_UNUSED(name)      = NULL;
    const char *J4A_UNUSED(sign)      = NULL;
    jclass      J4A_UNUSED(class_id)  = NULL;
    int         J4A_UNUSED(api_level) = 0;

    sign = "tv/danmaku/ijk/media/player/misc/IMediaDataSource";
    class_J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource.id = J4A_FindClass__asGlobalRef__catchAll(env, sign);
    if (class_J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource.id == NULL)
        goto fail;

    class_id = class_J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource.id;
    name     = "readAt";
    sign     = "(J[BII)I";
    class_J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource.method_readAt = J4A_GetMethodID__catchAll(env, class_id, name, sign);
    if (class_J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource.method_readAt == NULL)
        goto fail;

    class_id = class_J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource.id;
    name     = "getSize";
    sign     = "()J";
    class_J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource.method_getSize = J4A_GetMethodID__catchAll(env, class_id, name, sign);
    if (class_J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource.method_getSize == NULL)
        goto fail;

    class_id = class_J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource.id;
    name     = "close";
    sign     = "()V";
    class_J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource.method_close = J4A_GetMethodID__catchAll(env, class_id, name, sign);
    if (class_J4AC_tv_danmaku_ijk_media_player_misc_IMediaDataSource.method_close == NULL)
        goto fail;

    ALOGD("J4ALoader: OK: '%s' loaded\n", "tv.danmaku.ijk.media.player.misc.IMediaDataSource");
    ret = 0;
fail:
    return ret;
}
