
msbuild opus-tools.sln -t:Rebuild -p:Configuration=Debug  -p:Platform=Win32 -m
msbuild opus-tools.sln -t:Rebuild -p:Configuration=Release -p:Platform=Win32 -m

msbuild opus-tools.sln -t:Rebuild -p:Configuration=Debug  -p:Platform=x64  -m
msbuild opus-tools.sln -t:Rebuild -p:Configuration=Release -p:Platform=x64  -m

msbuild opus-tools.sln -t:Rebuild -p:Configuration=Debug  -p:Platform=arm64  -m
msbuild opus-tools.sln -t:Rebuild -p:Configuration=Release -p:Platform=arm64  -m
