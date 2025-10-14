if EXIST  "C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Auxiliary\Build\vcvarsall.bat" (
call "C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Auxiliary\Build\vcvarsall.bat" x86
) else (
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvarsall.bat" x86
)

msbuild opus-tools.sln -t:Rebuild -p:Configuration=Debug  -p:Platform=Win32 -m
msbuild opus-tools.sln -t:Rebuild -p:Configuration=Release -p:Platform=Win32 -m

msbuild opus-tools.sln -t:Rebuild -p:Configuration=Debug  -p:Platform=x64  -m
msbuild opus-tools.sln -t:Rebuild -p:Configuration=Release -p:Platform=x64  -m

msbuild opus-tools.sln -t:Rebuild -p:Configuration=Debug  -p:Platform=arm64  -m
msbuild opus-tools.sln -t:Rebuild -p:Configuration=Release -p:Platform=arm64  -m
